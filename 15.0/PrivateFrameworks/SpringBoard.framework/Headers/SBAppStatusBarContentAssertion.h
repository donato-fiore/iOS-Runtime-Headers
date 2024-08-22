// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPSTATUSBARCONTENTASSERTION_H
#define SBAPPSTATUSBARCONTENTASSERTION_H

@class BSSimpleAssertion, UIStatusBar;



@interface SBAppStatusBarContentAssertion : BSSimpleAssertion {
    UIStatusBar *_statusBar;
}


@property (readonly, nonatomic, getter=isStatusBarPartLeadingHidden) BOOL statusBarPartLeadingHidden; // ivar: _statusBarPartLeadingHidden
@property (readonly, nonatomic, getter=isStatusBarPartTrailingHidden) BOOL statusBarPartTrailingHidden; // ivar: _statusBarPartTrailingHidden


-(id)initWithIdentifier:(id)arg0 statusBar:(id)arg1 forReason:(id)arg2 ;
-(void)_setStatusBarPartIdentifier:(id)arg0 hidden:(BOOL)arg1 animated:(BOOL)arg2 ;


@end


#endif