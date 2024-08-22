// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIAPPDOCUMENTSERVICEVIEWCONTROLLER_H
#define VUIAPPDOCUMENTSERVICEVIEWCONTROLLER_H

@class TVAppDocumentRequestController, NSString, NSMutableOrderedSet, NSMutableArray;
@protocol IKUpdateServiceRequestDelegate, VUIAppDocumentUpdateEventMonitorObserving, UIPopoverPresentationControllerDelegate, VUIAppDocumentUpdateContext;


#import "VUIAppContext.h"
#import "VUIAppDocumentUpdateEventStore.h"

@interface VUIAppDocumentServiceViewController : TVAppDocumentRequestController <IKUpdateServiceRequestDelegate, VUIAppDocumentUpdateEventMonitorObserving, UIPopoverPresentationControllerDelegate>



@property (weak, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL deferDocumentUpdateEventProcessing; // ivar: _deferDocumentUpdateEventProcessing
@property (retain, nonatomic) VUIAppDocumentUpdateEventStore *deferredDocumentUpdateEventStore; // ivar: _deferredDocumentUpdateEventStore
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *documentRef; // ivar: _documentRef
@property (retain, nonatomic) NSObject<VUIAppDocumentUpdateContext> *documentUpdateContext; // ivar: _documentUpdateContext
@property (retain, nonatomic) NSMutableOrderedSet *documentUpdateViewElements; // ivar: _documentUpdateViewElements
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *impressionableSwiftViewControllers; // ivar: _impressionableSwiftViewControllers
@property (nonatomic, getter=isDocumentMarkedDirty) BOOL markDocumentDirtyForRefreshUpdate; // ivar: _markDocumentDirtyForRefreshUpdate
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *viewControllerDocumentIdentifier; // ivar: _viewControllerDocumentIdentifier
@property (retain, nonatomic) NSString *viewControllerIdentifier; // ivar: _viewControllerIdentifier
@property (nonatomic) NSUInteger viewWillAppearReason; // ivar: _viewWillAppearReason


+(id)_findCollectionListChildElementsInViewElement:(id)arg0 ;
-(BOOL)_hasRefreshEvents;
-(BOOL)handleEvent:(id)arg0 targetResponder:(id)arg1 viewElement:(id)arg2 extraInfo:(*id)arg3 ;
-(BOOL)isEqualToAppDocumentServiceViewController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)_receivedEvents;
-(id)init;
-(id)initWithAppContext:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentServiceRequest:(id)arg0 ;
-(id)initWithDocumentServiceRequest:(id)arg0 loadImmediately:(BOOL)arg1 ;
-(id)initWithDocumentServiceRequest:(id)arg0 loadImmediately:(BOOL)arg1 documentRef:(id)arg2 viewControllerIdentifier:(id)arg3 viewControllerDocumentIdentifier:(id)arg4 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_cancelDocumentUpdateWithRequest:(id)arg0 ;
-(void)_cancelDocumentUpdates;
-(void)_cancelDocumentUpdatesAndPreserveUpdateEvents;
-(void)_disableFastScrollIfNeeded;
-(void)_performNextDocumentUpdateIfNeeded;
-(void)_registerDocumentUpdateEventDescriptorsWithServiceCompletionStatus:(NSInteger)arg0 ;
-(void)_removeEventTypes:(id)arg0 receivedEvents:(id)arg1 ;
-(void)_removeStoreEvents:(NSUInteger)arg0 ;
-(void)_startDocumentUpdateWithRequest:(id)arg0 ;
-(void)_startDocumentUpdatesForDeferredEventsIfPossible;
-(void)_startDocumentUpdatesWithContext:(id)arg0 ;
-(void)_unregisterDocumentUpdateEventDescriptors;
-(void)appDocumentDidReceiveEvent:(id)arg0 ;
-(void)appDocumentHasBecomeActive;
-(void)dealloc;
-(void)didCompleteDocumentCreationWithStatus:(NSInteger)arg0 errorDictionary:(id)arg1 ;
-(void)documentDidUpdate:(id)arg0 ;
-(void)popoverPresentationController:(id)arg0 willRepositionPopoverToRect:(struct CGRect *)arg1 inView:(*id)arg2 ;
-(void)serviceRequest:(id)arg0 didCompleteWithStatus:(NSInteger)arg1 errorDictionary:(id)arg2 ;
-(void)updateDocumentWithContextDictionary:(id)arg0 element:(id)arg1 ;
-(void)updateServiceRequest:(id)arg0 documentDidChange:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillAppearAfterTabSwitch;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif