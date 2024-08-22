// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNIVERSALSEARCHRESULTTABLESECTIONHEADERVIEW_H
#define UNIVERSALSEARCHRESULTTABLESECTIONHEADERVIEW_H

@class UITableViewHeaderFooterView, UIButton, NSString, NSURL;
@protocol UniversalSearchSectionHeaderViewWithFeedbackDelegate, UniversalSearchFeedbackDelegate;



@interface UniversalSearchResultTableSectionHeaderView : UITableViewHeaderFooterView <UniversalSearchSectionHeaderViewWithFeedbackDelegate>

 {
    UIButton *_feedbackButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<UniversalSearchFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *reportProblemURL; // ivar: _reportProblemURL
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // ivar: _title


-(void)_handleParsecFeedbackButtonTap:(id)arg0 ;


@end


#endif