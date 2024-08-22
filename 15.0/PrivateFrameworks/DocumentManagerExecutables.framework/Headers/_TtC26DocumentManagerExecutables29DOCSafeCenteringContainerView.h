// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC26DOCUMENTMANAGEREXECUTABLES29DOCSAFECENTERINGCONTAINERVIEW_H
#define _TTC26DOCUMENTMANAGEREXECUTABLES29DOCSAFECENTERINGCONTAINERVIEW_H

@class UIView;



@interface _TtC26DocumentManagerExecutables29DOCSafeCenteringContainerView : UIView {
    ? scrollView;
    ? scrollContainerView;
    ? centeredContentView;
    ? scrollContainerViewMinHeightConstraint;
    ? managedViewControllerObservedScrollView;
}


@property (nonatomic) CGRect frame;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)safeAreaInsetsDidChange;


@end


#endif