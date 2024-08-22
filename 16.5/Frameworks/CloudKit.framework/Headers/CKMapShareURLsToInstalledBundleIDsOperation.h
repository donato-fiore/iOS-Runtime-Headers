// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMAPSHAREURLSTOINSTALLEDBUNDLEIDSOPERATION_H
#define CKMAPSHAREURLSTOINSTALLEDBUNDLEIDSOPERATION_H

@class NSMutableDictionary, NSMutableArray, NSArray;
@protocol CKMapShareURLsToInstalledBundleIDsOperationCallbacks;


#import "CKOperation.h"
#import "CKMapShareURLsToInstalledBundleIDsOperationInfo.h"

@interface CKMapShareURLsToInstalledBundleIDsOperation : CKOperation <CKMapShareURLsToInstalledBundleIDsOperationCallbacks>



@property (readonly, nonatomic) NSObject<CKMapShareURLsToInstalledBundleIDsOperationCallbacks> *clientOperationCallbackProxy;
@property (retain, nonatomic) NSMutableDictionary *errorsByURL; // ivar: _errorsByURL
@property (retain, nonatomic) NSMutableArray *genericURLs; // ivar: _genericURLs
@property (copy, nonatomic) id *mapBundleIDsCompletionBlock; // ivar: _mapBundleIDsCompletionBlock
@property (readonly, nonatomic) CKMapShareURLsToInstalledBundleIDsOperationInfo *operationInfo;
@property (copy, nonatomic) id *perShareURLBlock; // ivar: _perShareURLBlock
@property (nonatomic) BOOL returnLocalBundlesOnly; // ivar: _returnLocalBundlesOnly
@property (copy, nonatomic) NSArray *shareURLs; // ivar: _shareURLs
@property (retain, nonatomic) NSMutableArray *specialURLs; // ivar: _specialURLs


+(SEL)daemonInvocationSelector;
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg0 ;
-(BOOL)CKOperationShouldRun:(*id)arg0 ;
-(BOOL)hasCKOperationCallbacksSet;
-(id)activityCreate;
-(id)getStaticBundleIDsForURLSlug:(id)arg0 withKey:(id)arg1 ;
-(id)init;
-(id)initWithShareURLs:(id)arg0 returnLocalBundlesOnly:(BOOL)arg1 ;
-(id)selectLocalBundleIDs:(id)arg0 ;
-(void)_finishOnCallbackQueueWithError:(id)arg0 ;
-(void)ckSignpostBegin;
-(void)ckSignpostEndWithError:(id)arg0 ;
-(void)fillFromOperationInfo:(id)arg0 ;
-(void)fillOutOperationInfo:(id)arg0 ;
-(void)handleBundleIDsFetchedForURL:(id)arg0 appBundleIDs:(id)arg1 daemonBundleIDs:(id)arg2 error:(id)arg3 ;
-(void)performCKOperation;


@end


#endif