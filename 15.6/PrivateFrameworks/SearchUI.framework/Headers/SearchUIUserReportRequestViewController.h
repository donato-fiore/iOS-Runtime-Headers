// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIUSERREPORTREQUESTVIEWCONTROLLER_H
#define SEARCHUIUSERREPORTREQUESTVIEWCONTROLLER_H

@class UIAlertController;
@protocol SearchUIFeedbackDelegate;



@interface SearchUIUserReportRequestViewController : UIAlertController

@property (retain) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate


-(BOOL)_canShowWhileLocked;
-(id)initWithResult:(id)arg0 cardSection:(id)arg1 feedbackDelegate:(id)arg2 sourceView:(id)arg3 ;
-(id)initWithResult:(id)arg0 cardSection:(id)arg1 userReportRequest:(id)arg2 feedbackDelegate:(id)arg3 sourceView:(id)arg4 ;
-(void)sendFeedbackForResult:(id)arg0 cardSection:(id)arg1 selectedPunchout:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif