// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSCLOUDHISTORYCONFIGURATION_H
#define WBSCLOUDHISTORYCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface WBSCloudHistoryConfiguration : NSObject

@property NSUInteger maximumRequestCharacterCount; // ivar: _maximumRequestCharacterCount
@property (retain) NSString *multipleDeviceFetchChangesThrottlingPolicyString; // ivar: _multipleDeviceFetchChangesThrottlingPolicyString
@property (retain) NSString *multipleDeviceSaveChangesThrottlingPolicyString; // ivar: _multipleDeviceSaveChangesThrottlingPolicyString
@property (readonly) BOOL shouldBatchSaveRecords; // ivar: _shouldBatchSaveRecords
@property (readonly) BOOL shouldUseLongLivedOperationsToSaveRecords; // ivar: _shouldUseLongLivedOperationsToSaveRecords
@property (retain) NSString *singleDeviceFetchChangesThrottlingPolicyString; // ivar: _singleDeviceFetchChangesThrottlingPolicyString
@property (retain) NSString *singleDeviceSaveChangesThrottlingPolicyString; // ivar: _singleDeviceSaveChangesThrottlingPolicyString
@property (retain) NSString *syncCircleSizeRetrievalThrottlingPolicyString; // ivar: _syncCircleSizeRetrievalThrottlingPolicyString
@property CGFloat syncWindow; // ivar: _syncWindow


-(id)_builtInConfiguration;
-(id)_sharedBuiltInConfiguration;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;
-(id)platformBuiltInConfiguration;
-(id)remoteConfiguration;
-(void)_applyBuiltInConfiguration:(id)arg0 ;
-(void)_applyConfiguration:(id)arg0 withTolerance:(NSInteger)arg1 ;
-(void)applyPlatformConfiguration:(id)arg0 withTolerance:(NSInteger)arg1 ;
-(void)applyRemoteConfiguration:(id)arg0 ;


@end


#endif