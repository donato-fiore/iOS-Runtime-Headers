// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSSOCKETPAIRMESSAGE_H
#define IDSSOCKETPAIRMESSAGE_H

@class NSString, NSData;
@protocol NSObject;

#import <Foundation/Foundation.h>


@interface IDSSocketPairMessage : NSObject

@property (nonatomic) BOOL cancelled; // ivar: _cancelled
@property (readonly, nonatomic) unsigned char command; // ivar: _command
@property (retain, nonatomic) NSObject<NSObject> *context; // ivar: _context
@property (retain, nonatomic) NSString *topic; // ivar: _topic
@property (readonly, nonatomic) NSData *underlyingData; // ivar: _underlyingData
@property (readonly, nonatomic) NSUInteger underlyingDataLength;
@property (nonatomic) BOOL useDynamicServiceName; // ivar: _useDynamicServiceName
@property (nonatomic) BOOL wasWrittenToConnection; // ivar: _wasWrittenToConnection


+(id)messageWithCommand:(unsigned char)arg0 data:(id)arg1 ;
+(id)messageWithData:(id)arg0 ;
+(id)messageWithHeaderData:(id)arg0 data:(id)arg1 ;
+(unsigned int)dataLengthFromHeaderData:(id)arg0 ;
+(unsigned int)headerDataSize;
-(id)_existingUnderlyingData;
-(id)_nonHeaderData;
-(id)initWithCommand:(unsigned char)arg0 underlyingData:(id)arg1 ;


@end


#endif