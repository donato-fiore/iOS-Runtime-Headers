// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIEVENTATTRIBUTIONVIEW_H
#define UIEVENTATTRIBUTIONVIEW_H



#import "UIView.h"

@interface UIEventAttributionView : UIView



+(id)lastEventMessage;
+(void)setLastEventMessage:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)_updateLayerContents;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)setHidden:(BOOL)arg0 ;


@end


#endif