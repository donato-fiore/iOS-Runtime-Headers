// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STATUS_H
#define STATUS_H

@class NSManagedObject, NSString, NSDate, NSData;



@interface Status : NSManagedObject

@property (copy, nonatomic) NSString *channelIdentifier;
@property (copy, nonatomic) NSDate *dateCreated;
@property (copy, nonatomic) NSDate *dateExpired;
@property (copy, nonatomic) NSDate *datePublished;
@property (copy, nonatomic) NSDate *dateReceived;
@property (retain, nonatomic) NSData *rawData;
@property (copy, nonatomic) NSString *uniqueIdentifier;


+(id)fetchRequest;
+(id)predicateForChannelIdentifier:(id)arg0 ;
+(id)predicateForStatusUniqueIdentifier:(id)arg0 ;
+(id)sortDescriptorForDateCreatedAscending:(BOOL)arg0 ;
+(id)sortDescriptorForDatePublishedAscending:(BOOL)arg0 ;


@end


#endif