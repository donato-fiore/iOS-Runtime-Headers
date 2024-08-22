// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRNOWPLAYINGCONTROLLER_H
#define MRNOWPLAYINGCONTROLLER_H

@class NSDate, NSError;
@protocol MRNowPlayingControllerDelegate, OS_dispatch_queue, MRNowPlayingControllerImpl;

#import <Foundation/Foundation.h>

#import "MRNowPlayingControllerConfiguration.h"
#import "MRDestination.h"
#import "MRNowPlayingPlayerResponse.h"

@interface MRNowPlayingController : NSObject

@property (retain, nonatomic) NSDate *allocationDate; // ivar: _allocationDate
@property (retain, nonatomic) NSDate *beginDate; // ivar: _beginDate
@property (copy, nonatomic) MRNowPlayingControllerConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<MRNowPlayingControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy, nonatomic) MRDestination *destination;
@property (retain, nonatomic) NSDate *endDate; // ivar: _endDate
@property (retain, nonatomic) NSObject<MRNowPlayingControllerImpl> *impl; // ivar: _impl
@property (retain, nonatomic) NSError *lastError; // ivar: _lastError
@property (retain, nonatomic) NSDate *lastErrorDate; // ivar: _lastErrorDate
@property (retain, nonatomic) NSDate *lastInitialLoadDate; // ivar: _lastInitialLoadDate
@property (retain, nonatomic) NSDate *lastInvalidationDate; // ivar: _lastInvalidationDate
@property (retain, nonatomic) NSDate *lastUpdateDate; // ivar: _lastUpdateDate
@property (retain, nonatomic) MRNowPlayingPlayerResponse *response; // ivar: _response


+(id)localRouteController;
+(id)proactiveEndpointController;
+(void)performRequest:(id)arg0 withCompletion:(id)arg1 ;
+(void)sendCommand:(unsigned int)arg0 toDestination:(id)arg1 options:(id)arg2 appOptions:(unsigned int)arg3 withCompletion:(id)arg4 ;
-(id)createImplWithConfiguration:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithDestination:(id)arg0 ;
-(id)initWithUID:(id)arg0 ;
-(id)playerPath;
-(void)_notifyDelegateOfError:(id)arg0 ;
-(void)_notifyDelegateOfInvalidation;
-(void)_notifyDelegateOfNewResponse:(id)arg0 ;
-(void)_notifyDelegateOfPlaybackQueueChange:(id)arg0 ;
-(void)_notifyDelegateOfPlaybackStateChange:(unsigned int)arg0 ;
-(void)_notifyDelegateOfPlayerPathChange:(id)arg0 ;
-(void)_notifyDelegateOfSupportedCommandsChange:(id)arg0 ;
-(void)_notifyDelegateOfUpdate;
-(void)_notifyDelegateOfUpdatedArtwork:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedClientProperties:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedContentItemsWithContentItems:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedDeviceLastPlayingDate:(id)arg0 ;
-(void)_notifyDelegateOfUpdatedPlayerLastPlayingDate:(id)arg0 ;
-(void)beginLoadingUpdates;
-(void)dealloc;
-(void)endLoadingUpdates;
-(void)performRequestWithCompletion:(id)arg0 ;
-(void)sendCommand:(unsigned int)arg0 options:(id)arg1 appOptions:(unsigned int)arg2 completion:(id)arg3 ;
-(void)sendCommand:(unsigned int)arg0 options:(id)arg1 completion:(id)arg2 ;


@end


#endif