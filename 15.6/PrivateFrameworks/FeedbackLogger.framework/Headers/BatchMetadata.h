// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BATCHMETADATA_H
#define BATCHMETADATA_H

@class NSString, NSNumber, NSDate;

#import <Foundation/Foundation.h>


@interface BatchMetadata : NSObject

@property (copy, nonatomic) NSString *batchIdentifier; // ivar: _batchIdentifier
@property (nonatomic) NSUInteger batchSize; // ivar: _batchSize
@property (nonatomic) int batchStatus; // ivar: _batchStatus
@property (retain, nonatomic) NSNumber *category; // ivar: _category
@property (copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (copy, nonatomic) NSDate *dateLastProcessed; // ivar: _dateLastProcessed
@property (copy, nonatomic) NSDate *dateUploaded; // ivar: _dateUploaded
@property (nonatomic) NSUInteger eventCount; // ivar: _eventCount
@property (nonatomic) NSUInteger processedAttempts; // ivar: _processedAttempts
@property (copy, nonatomic) NSString *timestampReferenceIdentifier; // ivar: _timestampReferenceIdentifier




@end


#endif