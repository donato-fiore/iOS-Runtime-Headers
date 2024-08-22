// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RADIOSYNCREQUEST_H
#define RADIOSYNCREQUEST_H

@class SSURLConnectionRequest, NSDictionary, NSString;
@protocol OS_dispatch_queue;


#import "RadioRequest.h"

@interface RadioSyncRequest : RadioRequest {
    NSObject<OS_dispatch_queue> *_artworkQueue;
    NSUInteger _globalVersion;
    SSURLConnectionRequest *_request;
    NSDictionary *_responseDictionary;
}


@property (nonatomic) BOOL disableArtworkLoading; // ivar: _disableArtworkLoading
@property (nonatomic) BOOL includeCleanTracksOnly; // ivar: _includeCleanTracksOnly
@property (nonatomic) BOOL isAutomaticUpdate; // ivar: _isAutomaticUpdate
@property (copy, nonatomic) NSString *referer; // ivar: _referer
@property (readonly, copy, nonatomic) NSDictionary *resultingOverrideBagDictionary; // ivar: _resultingOverrideBagDictionary


-(id)_sortedChangesByType:(id)arg0 ;
-(id)_stationSortOrderForChanges:(id)arg0 ;
-(id)_updateModel:(id)arg0 withChangeDictionary:(id)arg1 changeType:(*NSInteger)arg2 loadArtworkSynchronously:(BOOL)arg3 ;
-(id)changeList;
-(id)init;
-(id)initWithGlobalVersion:(NSUInteger)arg0 ;
-(id)matchDictionary;
-(id)responseDictionary;
-(void)cancel;
-(void)startWithCompletionHandler:(id)arg0 ;


@end


#endif