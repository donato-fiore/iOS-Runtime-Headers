// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKSUBSCRIBEDCALENDAREDITOR_H
#define EKSUBSCRIBEDCALENDAREDITOR_H

@class EKSource, NSString, DAESubscribedCalendarSummary, CUIKSubscribedCalendarManager, NSURL;
@protocol DAESubscribedCalendarDownloadDelegate;


#import "EKAbstractCalendarEditor.h"
#import "EKSubscribedCalendarDescriptionHeader.h"
#import "EKCalendarColorEditItem.h"
#import "EKCalendarSubscriptionURLEditItem.h"
#import "EKCalendarValidateEditItem.h"

@interface EKSubscribedCalendarEditor : EKAbstractCalendarEditor <DAESubscribedCalendarDownloadDelegate>

 {
    EKSource *_limitedToSource;
    EKSubscribedCalendarDescriptionHeader *_tableViewHeader;
    NSString *_username;
    NSString *_password;
    BOOL _insecureConnectionOffered;
    BOOL _insecureConnectionApproved;
    EKCalendarColorEditItem *_colorEditItem;
    EKCalendarSubscriptionURLEditItem *_urlItem;
    EKCalendarValidateEditItem *_validateItem;
    id *_previewDownloadToken;
    DAESubscribedCalendarSummary *_previewSummary;
    CUIKSubscribedCalendarManager *_subCalManager;
    BOOL _allowTableHeaderLayouts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSURL *prefillURL; // ivar: _prefillURL
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


+(id)createNewCalendarForEntityType:(NSUInteger)arg0 inEventStore:(id)arg1 ;
-(BOOL)_shouldShowDeleteButton;
-(id)_editItemsForState:(NSUInteger)arg0 ;
-(id)initWithCalendar:(id)arg0 eventStore:(id)arg1 entityType:(NSUInteger)arg2 limitedToSource:(id)arg3 ;
-(id)loadEditItems;
-(id)rightButton;
-(void)_cancelInFlightPreviewDataFetch;
-(void)_kickoffPreviewDataFetch:(id)arg0 ;
-(void)_promptToContinueUsingInsecureConnection;
-(void)_setTableHeaderViewForState;
-(void)_unsubscribeFromCalendar;
-(void)_unsubscribeTapped:(id)arg0 ;
-(void)_validateURL;
-(void)_validateURL:(id)arg0 ;
-(void)calendarItemStartedEditing:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)didSaveCalendar:(id)arg0 ;
-(void)loadView;
-(void)subscribedCalendarDidFinishLoading:(id)arg0 ;
-(void)subscribedCalendarFailedWithError:(id)arg0 ;
-(void)subscribedCalendarProgressedTo:(NSInteger)arg0 totalBytes:(NSInteger)arg1 ;
-(void)subscribedCalendarRequiresPassword:(id)arg0 withContinuation:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willSaveCalendar:(id)arg0 ;


@end


#endif