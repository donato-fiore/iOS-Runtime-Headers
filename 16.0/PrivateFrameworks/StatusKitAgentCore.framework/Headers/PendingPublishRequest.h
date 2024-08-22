// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PENDINGPUBLISHREQUEST_H
#define PENDINGPUBLISHREQUEST_H

@class NSManagedObject, NSDate, NSData, NSString;



@interface PendingPublishRequest : NSManagedObject

@property (copy, nonatomic) NSDate *dateCreated;
@property (retain, nonatomic) NSData *payloadData;
@property (nonatomic) int retryCount;
@property (copy, nonatomic) NSString *statusTypeIdentifier;
@property (copy, nonatomic) NSString *statusUniqueIdentifier;


+(id)fetchRequest;
+(id)predicateForStatusTypeIdentifier:(id)arg0 ;
+(id)predicateForStatusUniqueIdentifier:(id)arg0 ;
+(id)sortDescriptorForDateCreatedAscending:(BOOL)arg0 ;


@end


#endif