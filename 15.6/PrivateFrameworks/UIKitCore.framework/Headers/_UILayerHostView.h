// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UILAYERHOSTVIEW_H
#define _UILAYERHOSTVIEW_H

@class UIVisibilityPropagationView, CALayerHost;



@interface _UILayerHostView : UIVisibilityPropagationView {
    int _pid;
    unsigned int _contextID;
}


@property (nonatomic) unsigned int contextID;
@property (nonatomic) BOOL inheritsSecurity;
@property (readonly, retain, nonatomic) CALayerHost *layerHost;


+(Class)layerClass;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 pid:(int)arg1 contextID:(unsigned int)arg2 ;
-(void)dealloc;
-(void)setPid:(int)arg0 contextID:(unsigned int)arg1 ;


@end


#endif