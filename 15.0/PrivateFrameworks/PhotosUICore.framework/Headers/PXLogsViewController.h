// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXLOGSVIEWCONTROLLER_H
#define PXLOGSVIEWCONTROLLER_H

@class UIViewController, NSArray, NSDate, UITextView, UIActivityIndicatorView, OSLogEventStreamBase, NSMutableAttributedString, NSMutableArray, NSMutableIndexSet, NSMutableDictionary, NSDateFormatter;



@interface PXLogsViewController : UIViewController {
    NSArray *_subsystemsAndCategories;
    NSDate *_startDate;
    UITextView *_textView;
    UIActivityIndicatorView *_spinnerView;
    OSLogEventStreamBase *_eventStream;
    NSMutableAttributedString *_fullAttributedString;
    BOOL _hasScheduledTextViewUpdate;
    NSMutableArray *_compactLogs;
    NSMutableArray *_expandedLogs;
    NSMutableIndexSet *_isExpanded;
    NSMutableDictionary *_substitutionByObjectRepresentation;
    NSMutableDictionary *_nextAvailableIndexByClassName;
}


@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter


-(BOOL)isCollectionRepresentation:(id)arg0 ;
-(id)initLiveWithSubsystem:(id)arg0 category:(id)arg1 ;
-(id)initLiveWithSubsystemsAndCategories:(id)arg0 ;
-(id)initWithSubsystem:(id)arg0 category:(id)arg1 startDate:(id)arg2 ;
-(id)initWithSubsystemsAndCategories:(id)arg0 startDate:(id)arg1 ;
-(id)substitutionForCollectionRepresentation:(id)arg0 attributes:(id)arg1 ;
-(id)substitutionForObjectRepresentation:(id)arg0 ;
-(id)subsystemsAndCategoriesPredicateWithSubsystemsAndCategories:(id)arg0 ;
-(void)logAttributedString:(id)arg0 ;
-(void)prepareDiskStore;
-(void)prepareLiveStore;
-(void)removeSpinner;
-(void)setupEventStream:(id)arg0 ;
-(void)tapped:(id)arg0 ;
-(void)toggleModeForStringIndex:(NSUInteger)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif