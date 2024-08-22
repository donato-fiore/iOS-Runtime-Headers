// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUMEDIASUGGESTIONSCONTROLLER_H
#define MRUMEDIASUGGESTIONSCONTROLLER_H

@class NSString, NSDate, NSArray;
@protocol MRUEndpointControllerObserver, MRUMetadataControllerObserver, MRUMediaSuggestionsDataSourceDelegate, MRULockScreenMonitorObserver, MRUMediaSuggestionsDataSource, MRUMediaSuggestionsControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MRUEndpointController.h"
#import "MRULockScreenMonitor.h"
#import "MRUMetadataController.h"

@interface MRUMediaSuggestionsController : NSObject <MRUEndpointControllerObserver, MRUMetadataControllerObserver, MRUMediaSuggestionsDataSourceDelegate, MRULockScreenMonitorObserver>



@property (retain, nonatomic) NSString *context; // ivar: _context
@property (retain, nonatomic) NSObject<MRUMediaSuggestionsDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MRUMediaSuggestionsControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MRUEndpointController *endpointController; // ivar: _endpointController
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isPlaying; // ivar: _isPlaying
@property (nonatomic) BOOL isQueueHandoffActive; // ivar: _isQueueHandoffActive
@property (retain, nonatomic) NSDate *lastPlayingDate; // ivar: _lastPlayingDate
@property (retain, nonatomic) MRULockScreenMonitor *lockscreenMonitor; // ivar: _lockscreenMonitor
@property (readonly, nonatomic) NSArray *mediaSuggestions; // ivar: _mediaSuggestions
@property (readonly, nonatomic) MRUMetadataController *metadataController; // ivar: _metadataController
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // ivar: _requestQueue
@property (readonly) Class superclass;


-(id)initWithEndpointController:(id)arg0 metadataController:(id)arg1 dataSource:(id)arg2 ;
-(void)endpointController:(id)arg0 didChangeRoute:(id)arg1 ;
-(void)lockscreenMonitor:(id)arg0 didUpdateDeviceLocked:(BOOL)arg1 ;
-(void)mediaSuggestionsDataSource:(id)arg0 didChangeMediaSuggestions:(id)arg1 ;
-(void)metadataController:(id)arg0 didChangeNowPlayingInfo:(id)arg1 ;
-(void)refreshMediaSuggestions;
-(void)updateLastPlayedDate;
-(void)updateMediaSuggestions;
-(void)updatePlayingState;


@end


#endif