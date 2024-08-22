// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCPMAEMBEDDINGENTRY_H
#define VCPMAEMBEDDINGENTRY_H

@class NSManagedObject, NSDate, NSData, NSString;



@interface VCPMAEmbeddingEntry : NSManagedObject

@property (retain, nonatomic) NSDate *assetCreationDate;
@property (retain, nonatomic) NSData *checksum;
@property (copy, nonatomic) NSString *cloudIdentifier;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) NSInteger embeddingType;
@property (nonatomic) NSInteger embeddingVersion;
@property (nonatomic) NSInteger flags;
@property (copy, nonatomic) NSString *localIdentifier;
@property (nonatomic) NSInteger processed;
@property (nonatomic) NSInteger random;


+(id)fetchRequest;


@end


#endif