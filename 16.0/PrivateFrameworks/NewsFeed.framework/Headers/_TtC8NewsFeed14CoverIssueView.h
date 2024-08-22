// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8NEWSFEED14COVERISSUEVIEW_H
#define _TTC8NEWSFEED14COVERISSUEVIEW_H

@class UIView, NSString;



@interface _TtC8NewsFeed14CoverIssueView : UIView {
    ? moreActionsButton;
    ? followButton;
    ? titleLabel;
    ? issueCoverView;
    ? secondaryIssueCoverView;
    ? accessoryLabel;
    ? downloadProgressBar;
    ? cloudIcon;
    ? selectionImageView;
    ? onEditSelection;
    ? debugButton;
    ? isEditSelected;
    ? downloadButtonDataProvider;
    ? downloadStateDisposable;
    ? downloadProgressDisposable;
}


@property (nonatomic, copy) NSString *accessibilityValue;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif