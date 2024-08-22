// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WKLAYERHOSTVIEW_H
#define WKLAYERHOSTVIEW_H

@class UIView;



@interface WKLayerHostView : UIView

@property (nonatomic) unsigned int contextID;


+(Class)layerClass;
-(id)layerHost;


@end


#endif