// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPONENTDEBUGVIEW_H
#define CKCOMPONENTDEBUGVIEW_H

@class UIView;



@interface CKComponentDebugView : UIView {
    BOOL _selfDestructOnHiding;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)debugModeDidChange;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif