// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDMAPSHAREURLSTOINSTALLEDBUNDLEIDSOPERATION_H
#define CKDMAPSHAREURLSTOINSTALLEDBUNDLEIDSOPERATION_H

@class NSMutableDictionary, NSMutableArray;
@protocol CKMapShareURLsToInstalledBundleIDsOperationCallbacks;


#import "CKDOperation.h"

@interface CKDMapShareURLsToInstalledBundleIDsOperation : CKDOperation

@property (copy, nonatomic) id *bundleIDsFetchedBlock; // ivar: _bundleIDsFetchedBlock
@property (retain, nonatomic) NSObject<CKMapShareURLsToInstalledBundleIDsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableDictionary *shareMetadatasByURL; // ivar: _shareMetadatasByURL
@property (retain, nonatomic) NSMutableArray *shareURLs; // ivar: _shareURLs
@property (nonatomic) NSUInteger state;


-(BOOL)makeStateTransition;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg0 container:(id)arg1 ;
-(id)nameForState:(NSUInteger)arg0 ;
-(int)operationType;
-(void)_fetchRegisteredBundleIDs;
-(void)_fetchShareMetadata;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)_performCallbackForURL:(id)arg0 withAppBundleIDs:(id)arg1 daemonBundleIDs:(id)arg2 error:(id)arg3 ;
-(void)main;


@end


#endif