// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFREALMCLOUDKITSYNCTOKEN_H
#define WFREALMCLOUDKITSYNCTOKEN_H

@class NSString, NSDate, NSData;
@protocol WFRecordStorage;


#import "RLMObject.h"

@interface WFRealmCloudKitSyncToken : RLMObject <WFRecordStorage>



@property (copy, nonatomic) NSString *account; // ivar: _account
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSData *lastOrderingCloudKitRecordMetadata; // ivar: _lastOrderingCloudKitRecordMetadata
@property (copy, nonatomic) NSData *lastOrderingData; // ivar: _lastOrderingData
@property (copy, nonatomic) NSData *serverChangeTokenData; // ivar: _serverChangeTokenData
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *syncEngineMetadata; // ivar: _syncEngineMetadata
@property (copy, nonatomic) NSData *syncFlagsCloudKitRecordMetadata; // ivar: _syncFlagsCloudKitRecordMetadata


+(id)className;
+(id)defaultPropertyValues;
+(id)primaryKey;
+(id)requiredProperties;
+(id)syncTokenInRealm:(id)arg0 ;
+(void)setSyncToken:(id)arg0 inRealm:(id)arg1 ;
-(id)descriptor;


@end


#endif