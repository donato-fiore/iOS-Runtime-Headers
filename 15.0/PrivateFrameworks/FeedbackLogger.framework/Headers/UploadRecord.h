// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPLOADRECORD_H
#define UPLOADRECORD_H

@class NSDate, NSData, NSString;

#import <Foundation/Foundation.h>


@interface UploadRecord : NSObject

@property (copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (copy, nonatomic) NSDate *dateLastProcessed; // ivar: _dateLastProcessed
@property (copy, nonatomic) NSDate *dateUploaded; // ivar: _dateUploaded
@property (copy, nonatomic) NSData *payload; // ivar: _payload
@property (nonatomic) NSUInteger processedAttempts; // ivar: _processedAttempts
@property (copy, nonatomic) NSString *timestampReferenceIdentifier; // ivar: _timestampReferenceIdentifier
@property (copy, nonatomic) NSString *uploadIdentifier; // ivar: _uploadIdentifier
@property (nonatomic) int uploadStatus; // ivar: _uploadStatus




@end


#endif