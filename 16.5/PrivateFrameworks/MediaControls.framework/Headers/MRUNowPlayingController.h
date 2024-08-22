// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUNOWPLAYINGCONTROLLER_H
#define MRUNOWPLAYINGCONTROLLER_H

@class NSString, NSHashTable;
@protocol MRUEndpointControllerObserver, MRUTVRemoteControllerDelegate, MRUMetadataControllerObserver, MRUMediaSuggestionsControllerDelegate, MRUNowPlayingQueueHandoffCoordinatorDelegate, MRUMetadataDataSource;

#import <Foundation/Foundation.h>

#import "MRUEndpointController.h"
#import "MRUMRMetadataDataSource.h"
#import "MRUMediaSuggestionsController.h"
#import "MRUMetadataController.h"
#import "MRUNowPlayingQueueHandoffCoordinator.h"
#import "MRUTransportControlItem.h"
#import "MRUTVRemoteController.h"

@interface MRUNowPlayingController : NSObject <MRUEndpointControllerObserver, MRUTVRemoteControllerDelegate, MRUMetadataControllerObserver, MRUMediaSuggestionsControllerDelegate, MRUNowPlayingQueueHandoffCoordinatorDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MRUEndpointController *endpointController; // ivar: _endpointController
@property (retain, nonatomic) MRUMRMetadataDataSource *handoffDataSource; // ivar: _handoffDataSource
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) MRUMediaSuggestionsController *mediaSuggestionsController; // ivar: _mediaSuggestionsController
@property (readonly, nonatomic) MRUMetadataController *metadataController; // ivar: _metadataController
@property (retain, nonatomic) NSObject<MRUMetadataDataSource> *metadataDataSource; // ivar: _metadataDataSource
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) MRUNowPlayingQueueHandoffCoordinator *queueHandoffCoordinator; // ivar: _queueHandoffCoordinator
@property (readonly, nonatomic) MRUTransportControlItem *quickControlItem; // ivar: _quickControlItem
@property (readonly) Class superclass;
@property (readonly, nonatomic) MRUTVRemoteController *tvRemoteController; // ivar: _tvRemoteController


-(id)initWithEndpointController:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)addSwiftObserver:(id)arg0 ;
-(void)endpointController:(id)arg0 didChangeRoute:(id)arg1 ;
-(void)endpointController:(id)arg0 didChangeState:(NSInteger)arg1 ;
-(void)mediaSuggestionsController:(id)arg0 didChangeMediaSuggestions:(id)arg1 ;
-(void)metadataController:(id)arg0 didChangeArtwork:(id)arg1 ;
-(void)metadataController:(id)arg0 didChangeBundleID:(id)arg1 ;
-(void)metadataController:(id)arg0 didChangeNowPlayingInfo:(id)arg1 ;
-(void)metadataController:(id)arg0 didChangeTimeControls:(id)arg1 ;
-(void)metadataController:(id)arg0 didChangeTransportControls:(id)arg1 ;
-(void)queueHandoffCoordinator:(id)arg0 didChangeResponse:(id)arg1 ;
-(void)queueHandoffCoordinator:(id)arg0 didChangeState:(NSInteger)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)removeSwiftObserver:(id)arg0 ;
-(void)routingDeviceImage:(id)arg0 ;
-(void)tvRemoteController:(id)arg0 didChangeShowTVRemote:(BOOL)arg1 ;
-(void)updateAutomaticResponseLoading;
-(void)updateQuickTransportItem;


@end


#endif