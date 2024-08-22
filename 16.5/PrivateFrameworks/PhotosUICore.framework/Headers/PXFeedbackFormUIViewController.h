// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXFEEDBACKFORMUIVIEWCONTROLLER_H
#define PXFEEDBACKFORMUIVIEWCONTROLLER_H

@class UIViewController, NSArray, NSMutableDictionary, UITextView, NSString, UITableViewController;
@protocol UITableViewDataSource, UITableViewDelegate, UITextViewDelegate, PXFeedbackFormDelegate;



@interface PXFeedbackFormUIViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextViewDelegate>

 {
    BOOL _userLikedIt;
    BOOL _wantsCustomFeedbackSection;
    BOOL _wantsPositiveFeedbackSection;
    NSArray *_positiveFeedbackKeys;
    NSMutableDictionary *_positiveFeedbackValues;
    NSArray *_negativeFeedbackKeys;
    NSMutableDictionary *_negativeFeedbackValues;
    UITextView *_customFeedbackTextView;
}


@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<PXFeedbackFormDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableViewController *tableViewController; // ivar: _tableViewController


-(BOOL)_isSelectedRow:(id)arg0 inSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)_feedbackFormSectionForSectionIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_feedbackKeyForIndexPath:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 positiveKeys:(id)arg1 negativeKeys:(id)arg2 wantsCustomFeedbackSection:(BOOL)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_handleDoneButtonWasPressedOnCustomFeedbackView;
-(void)_markCell:(id)arg0 asSelected:(BOOL)arg1 ;
-(void)_setSelectionStateForKey:(id)arg0 inSection:(NSInteger)arg1 to:(BOOL)arg2 ;
-(void)cancelFeedback:(id)arg0 ;
-(void)finishWithSuccess:(BOOL)arg0 ;
-(void)sendFeedback:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif