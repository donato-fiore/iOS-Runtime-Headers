// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEDNSPACKET_H
#define NEDNSPACKET_H

@class NSData, NSArray, NSString, NSDate;

#import <Foundation/Foundation.h>


@interface NEDNSPacket : NSObject {
    unsigned short _flags;
    NSData *_data;
    NSUInteger _endOfQueriesOffset;
}


@property (readonly) NSArray *additionalRecords; // ivar: _additionalRecords
@property (readonly) NSArray *answers; // ivar: _answers
@property (readonly) NSArray *authorities; // ivar: _authorities
@property (readonly) NSInteger identifier; // ivar: _identifier
@property (readonly) BOOL isAuthoritativeAnswer; // ivar: _isAuthoritativeAnswer
@property (readonly) BOOL isRecursionAvailable; // ivar: _isRecursionAvailable
@property (readonly) BOOL isRecursionDesired; // ivar: _isRecursionDesired
@property (readonly) BOOL isTruncated; // ivar: _isTruncated
@property (readonly) NSInteger messageType; // ivar: _messageType
@property (readonly) NSInteger opCode; // ivar: _opCode
@property (readonly) NSArray *queries; // ivar: _queries
@property (readonly) NSInteger responseCode; // ivar: _responseCode
@property (readonly) NSString *responseCodeString;
@property (readonly) NSDate *timestamp; // ivar: _timestamp


+(id)createDataWithQuery:(id)arg0 ;
-(id)createResponse;
-(id)initFromData:(id)arg0 ;


@end


#endif