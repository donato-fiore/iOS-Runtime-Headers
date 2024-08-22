// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKAUTHORIZATIONSTORE_H
#define HKAUTHORIZATIONSTORE_H

@class NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKProxyProvider.h"

@interface HKAuthorizationStore : NSObject <_HKXPCExportable>

 {
    HKProxyProvider *_readProxyProvider;
    HKProxyProvider *_writeProxyProvider;
    HKProxyProvider *_resetProxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)readTaskIdentifier;
+(id)resetTaskIdentifier;
+(id)writeTaskIdentifier;
-(BOOL)validateRecalibrateEstimatesRequestRecord:(id)arg0 error:(*id)arg1 ;
-(id)exportedInterface;
-(id)fetchAuthorizationContextForPromptSession:(id)arg0 error:(*id)arg1 ;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
// -(void)_fetchReadProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_fetchResetProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_fetchSynchronousReadProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
// -(void)_fetchWriteProxyWithHandler:(id)arg0 errorHandler:(unk)arg1  ;
-(void)connectionInvalidated;
-(void)fetchAuthorizationRecordsForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)fetchAuthorizationRecordsForType:(id)arg0 completion:(id)arg1 ;
-(void)fetchAuthorizationStatusesForDocumentType:(id)arg0 bundleIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)fetchAuthorizationStatusesForSample:(id)arg0 completion:(id)arg1 ;
-(void)fetchSourcesRequestingAuthorizationForTypes:(id)arg0 completion:(id)arg1 ;
-(void)recalibrateEstimatesForSampleType:(id)arg0 effectiveDate:(id)arg1 completion:(id)arg2 ;
-(void)resetAllObjectAuthorizationStatusForBundleIdentifier:(id)arg0 objectType:(id)arg1 completion:(id)arg2 ;
-(void)resetAuthorizationStatusForBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)resetAuthorizationStatusesForObjects:(id)arg0 completion:(id)arg1 ;
-(void)setAuthorizationStatuses:(id)arg0 authorizationModes:(id)arg1 forBundleIdentifier:(id)arg2 options:(NSUInteger)arg3 completion:(id)arg4 ;
-(void)setObjectAuthorizationStatuses:(id)arg0 forBundleIdentifier:(id)arg1 sessionIdentifier:(id)arg2 completion:(id)arg3 ;
-(void)setRequestedAuthorizationForBundleIdentifier:(id)arg0 shareTypes:(id)arg1 readTypes:(id)arg2 completion:(id)arg3 ;


@end


#endif