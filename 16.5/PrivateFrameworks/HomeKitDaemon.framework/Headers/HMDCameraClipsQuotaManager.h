// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERACLIPSQUOTAMANAGER_H
#define HMDCAMERACLIPSQUOTAMANAGER_H

@class HMBCloudDatabase, NSString;
@protocol HMDDatabaseDelegate, HMFLogging;

#import <Foundation/Foundation.h>


@interface HMDCameraClipsQuotaManager : NSObject <HMDDatabaseDelegate, HMFLogging>



@property (readonly) HMBCloudDatabase *cloudDatabase; // ivar: _cloudDatabase
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_quotaErrorFromServerError:(id)arg0 ;
+(id)_quotaServerErrorFromServerError:(id)arg0 ;
+(id)defaultManager;
+(id)logCategory;
-(id)_addCodeOperationWithFunctionName:(id)arg0 request:(id)arg1 responseClass:(Class)arg2 ;
-(id)database:(id)arg0 willRemoveZoneWithName:(id)arg1 isPrivate:(BOOL)arg2 ;
-(id)disableCloudStorageForZoneWithName:(id)arg0 ;
-(id)enableCloudStorageForZoneWithName:(id)arg0 ;
-(id)initWithDatabase:(id)arg0 ;
-(id)logIdentifier;


@end


#endif