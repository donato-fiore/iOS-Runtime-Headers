// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDANCHOREDOBJECTQUERYSERVER_H
#define HDANCHOREDOBJECTQUERYSERVER_H

@class HKQueryAnchor, NSString, NSMutableArray, NSDictionary, NSArray;


#import "HDBatchedQueryServer.h"

@interface HDAnchoredObjectQueryServer : HDBatchedQueryServer {
    BOOL _deliversUpdates;
    BOOL _initialResultsSent;
    BOOL _objectsDeleted;
    BOOL _includeDeletedObjects;
    HKQueryAnchor *_startAnchor;
    NSString *_secureClientToken;
    NSUInteger _deliveredResults;
    NSMutableArray *_addedSamplesPendingResume;
    NSMutableArray *_deletedSamplesPendingResume;
    NSDictionary *_sampleTypeToFilterMap;
    BOOL _includeAutomaticTimeZones;
    BOOL _includeContributorInformation;
    HKQueryAnchor *_anchor;
    NSUInteger _limit;
    NSArray *_queryDescriptors;
    NSString *_localSourceUUIDString;
}




+(BOOL)supportsAnchorBasedAuthorization;
+(Class)queryClass;
+(id)requiredEntitlements;
-(BOOL)_shouldListenForUpdates;
-(BOOL)prepareToActivateServerWithError:(*id)arg0 ;
-(BOOL)validateConfiguration:(*id)arg0 ;
-(id)description;
-(id)initWithUUID:(id)arg0 configuration:(id)arg1 client:(id)arg2 delegate:(id)arg3 ;
-(id)objectTypes;
-(void)_queue_didChangeStateFromPreviousState:(NSInteger)arg0 state:(NSInteger)arg1 ;
-(void)_queue_didDeactivate;
-(void)_queue_start;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)samplesOfTypesWereRemoved:(id)arg0 anchor:(id)arg1 ;


@end


#endif