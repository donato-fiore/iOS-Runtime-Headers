// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFWEBPROCESSPLUGINREADERENABLEDPAGECONTROLLER_H
#define _SFWEBPROCESSPLUGINREADERENABLEDPAGECONTROLLER_H

@class SFWebProcessPlugInAutoFillPageController, _WKRemoteObjectInterface, NSDictionary, NSString;
@protocol SFReaderWebProcessControllerProtocol, SFReaderEventsListener, _SFAppBannerMetaTagContentObserver;


#import "SFWebProcessPlugInPageExtensionController.h"
#import "_SFWebProcessSharingLinkExtractor.h"
#import "SFWebProcessPlugInCertificateWarningController.h"
#import "_SFReaderWebProcessPlugInPageController.h"

@interface _SFWebProcessPlugInReaderEnabledPageController : SFWebProcessPlugInAutoFillPageController <SFReaderWebProcessControllerProtocol>

 {
    unique_ptr<SafariServices::ReaderAvailabilityController, std::default_delete<SafariServices::ReaderAvailabilityController>> _readerAvailabilityController;
    _WKRemoteObjectInterface *_availabilityControllerInterface;
    id<SFReaderEventsListener> *_readerActivityListenerProxy;
    NSDictionary *_initialScrollPositionAsDictionary;
    SFWebProcessPlugInPageExtensionController *_extensionController;
    _SFWebProcessSharingLinkExtractor *_sharingLinkExtractor;
    SFWebProcessPlugInCertificateWarningController *_certificateWarningController;
    id<_SFAppBannerMetaTagContentObserver> *_appBannerObserverProxy;
}


@property (nonatomic) NSInteger cachedReaderTopScrollOffset; // ivar: _cachedReaderTopScrollOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *initalArticleScrollPositionAsDictionary; // ivar: _initalArticleScrollPositionAsDictionary
@property (readonly, nonatomic) NSDictionary *initialReaderConfiguration; // ivar: _initialReaderConfiguration
@property (readonly, nonatomic) BOOL readerHasBeenActivatedRecently;
@property (retain, nonatomic) _SFReaderWebProcessPlugInPageController *readerPageController; // ivar: _readerPageController
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isViewingReadingListArchive) BOOL viewingReadingListArchive; // ivar: _viewingReadingListArchive


-(id)_appBannerMetaElementInHeaderElement:(id)arg0 ;
-(id)_appBannerMetaTagObserverProxy;
-(id)_searchForSmartAppBannerMetaContent;
-(id)initWithPlugIn:(id)arg0 contextController:(id)arg1 ;
-(struct OpaqueJSValue *)originalArticleFinder;
-(void)_clearReaderControllerInterface;
-(void)_detectAvailabilityAfterDelay:(CGFloat)arg0 loadEvent:(int)arg1 ;
-(void)_detectReaderAvailabilityAfterSameDocumentNavigation;
-(void)_setUpReaderActivityListenerProxy;
-(void)_setUpReaderControllerInterface;
-(void)activateFont:(id)arg0 ;
-(void)articleContentDidChange;
-(void)checkReaderAvailability;
-(void)collectArticleContent;
-(void)collectReaderContentForMail;
-(void)collectReadingListItemInfoWithBookmarkID:(id)arg0 ;
-(void)didCreateReaderPageContextHandle:(id)arg0 ;
-(void)didDetermineAdditionalTextSamples:(id)arg0 ;
-(void)didDetermineReaderAvailability:(id)arg0 ;
-(void)didFinishPresentationUpdateAfterTransitioningToReader;
-(void)didSetReaderConfiguration:(id)arg0 ;
-(void)loadNewReaderArticle;
-(void)prepareReaderContentForPrinting;
-(void)prepareToTransitionToReader;
-(void)readerContentDidBecomeReadyWithDetectedLanguage:(id)arg0 ;
-(void)readerTextWasExtracted:(id)arg0 withMetadata:(id)arg1 wasDeterminingAvailability:(BOOL)arg2 ;
-(void)setConfiguration:(id)arg0 ;
-(void)setReaderInitialTopScrollOffset:(NSInteger)arg0 configuration:(id)arg1 isViewingArchive:(BOOL)arg2 ;
-(void)setReaderIsActive:(BOOL)arg0 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didCommitLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFinishDocumentLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFinishLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didSameDocumentNavigation:(NSInteger)arg1 forFrame:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 globalObjectIsAvailableForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 renderingProgressDidChange:(NSUInteger)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 willInjectUserScriptForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)willDestroyBrowserContextController:(id)arg0 ;


@end


#endif