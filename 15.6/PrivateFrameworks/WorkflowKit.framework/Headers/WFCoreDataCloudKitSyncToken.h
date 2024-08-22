// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCOREDATACLOUDKITSYNCTOKEN_H
#define WFCOREDATACLOUDKITSYNCTOKEN_H

@class NSManagedObject, NSString, NSDate, NSData;
@protocol WFRecordStorage;



@interface WFCoreDataCloudKitSyncToken : NSManagedObject <WFRecordStorage>



@property (copy, nonatomic) NSString *account;
@property (copy, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *lastOrderingCloudKitRecordMetadata;
@property (retain, nonatomic) NSData *lastOrderingData;
@property (retain, nonatomic) NSData *serverChangeTokenData;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSData *syncEngineMetadata;
@property (retain, nonatomic) NSData *syncFlagsCloudKitRecordMetadata;


+(id)fetchRequest;
-(id)descriptor;


@end


#endif