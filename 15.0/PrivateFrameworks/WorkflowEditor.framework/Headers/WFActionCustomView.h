// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFACTIONCUSTOMVIEW_H
#define WFACTIONCUSTOMVIEW_H

@class UIView, WFAction;
@protocol WFComponentNavigationContext;



@interface WFActionCustomView : UIView

@property (weak, nonatomic) WFAction *action; // ivar: _action
@property (weak, nonatomic) NSObject<WFComponentNavigationContext> *navigationContext; // ivar: _navigationContext


+(CGFloat)preferredHeightForAction:(id)arg0 ;
-(void)didEnterReusePool;
-(void)willLeaveReusePool;


@end


#endif