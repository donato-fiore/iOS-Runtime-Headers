// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIREVIEWINAPPRATINGACTION_H
#define SKUIREVIEWINAPPRATINGACTION_H

@class UIInterfaceAction;



@interface SKUIReviewInAppRatingAction : UIInterfaceAction

@property (copy, nonatomic) id *afterDismissHandler; // ivar: _afterDismissHandler
@property (copy, nonatomic) id *beforeDismissHandler; // ivar: _beforeDismissHandler


+(id)actionWithCustomContentViewController:(id)arg0 ;
-(void)setCustomEnabledState:(BOOL)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;


@end


#endif