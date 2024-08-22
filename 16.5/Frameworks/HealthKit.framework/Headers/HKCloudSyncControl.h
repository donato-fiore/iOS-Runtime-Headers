// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKCLOUDSYNCCONTROL_H
#define HKCLOUDSYNCCONTROL_H

@class NSString;
@protocol _HKXPCExportable;

#import <Foundation/Foundation.h>

#import "HKTaskServerProxyProvider.h"

@interface HKCloudSyncControl : NSObject <_HKXPCExportable>

 {
    HKTaskServerProxyProvider *_proxyProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)taskIdentifier;
-(id)exportedInterface;
-(id)initWithHealthStore:(id)arg0 ;
-(id)remoteInterface;
-(void)accountConfigurationDidChangeWithCompletion:(id)arg0 ;
-(void)connectionInvalidated;
-(void)disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id)arg0 ;
// -(void)disableCloudSyncAndDeleteAllCloudDataWithProgress:(id)arg0 completion:(unk)arg1  ;
-(void)disableCloudSyncWithCompletion:(id)arg0 ;
-(void)enableCloudSyncWithCompletion:(id)arg0 ;
// -(void)fetchCloudDescriptionWithProgress:(id)arg0 completion:(unk)arg1  ;
// -(void)fetchCloudSyncProgress:(id)arg0 completion:(unk)arg1  ;
-(void)fetchCloudSyncRequiredWithCompletion:(id)arg0 ;
-(void)fetchCloudSyncStatusWithCompletion:(id)arg0 ;
// -(void)forceCloudResetWithProgress:(id)arg0 completion:(unk)arg1  ;
-(void)forceCloudSyncDataUploadForProfileWithCompletion:(id)arg0 ;
-(void)forceCloudSyncWithOptions:(NSUInteger)arg0 completion:(id)arg1 ;
// -(void)forceCloudSyncWithOptions:(NSUInteger)arg0 progress:(id)arg1 completion:(unk)arg2  ;
-(void)forceCloudSyncWithOptions:(NSUInteger)arg0 reason:(NSInteger)arg1 completion:(id)arg2 ;
-(void)oldestSampleStartDateInHealthDatabaseWithCompletion:(id)arg0 ;
-(void)requestDataRefreshWithCompletion:(id)arg0 ;


@end


#endif