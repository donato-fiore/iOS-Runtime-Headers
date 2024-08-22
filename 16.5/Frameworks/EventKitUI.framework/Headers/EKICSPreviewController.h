// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKICSPREVIEWCONTROLLER_H
#define EKICSPREVIEWCONTROLLER_H

@class EKEventStore, UIViewController, EKEvent, NSString;
@protocol EKEventViewDelegatePrivate, EKICSPreviewControllerDelegate;

#import <Foundation/Foundation.h>

#import "EKEventViewController.h"
#import "EKICSPreviewModel.h"

@interface EKICSPreviewController : NSObject <EKEventViewDelegatePrivate>

 {
    EKEventStore *_eventStore;
    EKEventViewController *_currentImport;
    UIViewController *_contentViewController;
    BOOL _importing;
    BOOL _hasCustomCancelButton;
    NSInteger _cancelButtonType;
    EKEvent *_eventFromUID;
}


@property (nonatomic) NSUInteger actionsState; // ivar: _actionsState
@property (nonatomic) BOOL allowsEditing; // ivar: _allowsEditing
@property (nonatomic) BOOL allowsImport; // ivar: _allowsImport
@property (nonatomic) BOOL allowsInvalidProperties; // ivar: _allowsInvalidProperties
@property (nonatomic) BOOL allowsSubitems; // ivar: _allowsSubitems
@property (nonatomic) BOOL allowsToDos; // ivar: _allowsToDos
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int eventUID; // ivar: _eventUID
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isImporting;
@property (readonly, nonatomic) EKICSPreviewModel *model; // ivar: _model
@property (weak, nonatomic) NSObject<EKICSPreviewControllerDelegate> *previewDelegate; // ivar: _previewDelegate
@property (nonatomic) BOOL showListViewForOneEvent; // ivar: _showListViewForOneEvent
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalEventCount;
@property (readonly, nonatomic) NSUInteger unimportedEventCount;


-(BOOL)_anyCalendarsSupportingImport;
-(BOOL)_calendarSupportsImport:(id)arg0 ;
-(BOOL)_shouldShowCalendarChooser;
-(BOOL)eventViewControllerShouldAlwaysShowNavBar:(id)arg0 ;
-(BOOL)eventViewControllerShouldDismissSelf:(id)arg0 ;
-(NSUInteger)_countOfCalendarsSupportingImport;
-(id)_defaultCalendarForImport;
-(id)detailViewForEvent:(id)arg0 eventInRealStore:(BOOL)arg1 isUpdate:(BOOL)arg2 ;
-(id)initWithData:(id)arg0 eventStore:(id)arg1 ;
-(id)initWithData:(id)arg0 eventStore:(id)arg1 options:(NSUInteger)arg2 ;
-(id)initWithEventObjectID:(id)arg0 eventStore:(id)arg1 ;
-(id)initWithEventUID:(int)arg0 eventStore:(id)arg1 ;
-(id)initWithURL:(id)arg0 eventStore:(id)arg1 ;
-(id)initWithURL:(id)arg0 eventStore:(id)arg1 options:(NSUInteger)arg2 ;
-(id)popoverContentController;
-(id)singleExistingEventUniqueID;
-(id)viewController;
-(void)_createCancelButtonWithType:(NSInteger)arg0 target:(id)arg1 action:(SEL)arg2 ;
-(void)_databaseChanged:(id)arg0 ;
-(void)_enumerateSupportedCalendarsUsingBlock:(id)arg0 ;
-(void)_updateCancelButton;
-(void)attemptDisplayReviewPrompt;
-(void)calendarChooserDidCancel:(id)arg0 ;
-(void)calendarChooserDidFinish:(id)arg0 ;
-(void)dealloc;
-(void)eventViewController:(id)arg0 didCompleteWithAction:(NSInteger)arg1 ;
-(void)eventViewControllerDidRequestAddToCalendar:(id)arg0 ;
-(void)handleDidImportEvent:(id)arg0 fromController:(id)arg1 intoCalendar:(id)arg2 ;
-(void)handleImportEventError;
-(void)icsPreviewListController:(id)arg0 didSelectEvent:(id)arg1 ;
-(void)icsPreviewListControllerDidRequestImportAll:(id)arg0 ;
-(void)importAllIntoCalendar:(id)arg0 ;
-(void)importAllRequested:(id)arg0 ;
-(void)importEventFromController:(id)arg0 intoCalendar:(id)arg1 ;
-(void)presentCalendarChooserForController:(id)arg0 ;
-(void)removeCancelButton;
-(void)setCancelButtonWithTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif