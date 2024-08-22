// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPLOADRECORD_H
#define UPLOADRECORD_H

@class NSString, NSDate, NSData;

#import <Foundation/Foundation.h>


@interface UploadRecord : NSObject

@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (copy, nonatomic) NSDate *dateCreated; // ivar: _dateCreated
@property (copy, nonatomic) NSDate *dateLastProcessed; // ivar: _dateLastProcessed
@property (copy, nonatomic) NSDate *dateUploaded; // ivar: _dateUploaded
@property (copy, nonatomic) NSData *payload; // ivar: _payload
@property (nonatomic) NSUInteger processedAttempts; // ivar: _processedAttempts
@property (nonatomic) NSUInteger size; // ivar: _size
@property (copy, nonatomic) NSString *timestampReferenceIdentifier; // ivar: _timestampReferenceIdentifier
@property (copy, nonatomic) NSString *uploadIdentifier; // ivar: _uploadIdentifier
@property (nonatomic) int uploadStatus; // ivar: _uploadStatus


-(id)outcomeTelemetryDictionary;


@end


#endif