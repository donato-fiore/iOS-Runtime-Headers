// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DTXMESSAGE_H
#define DTXMESSAGE_H

@class NSData, NSDictionary, NSError;
@protocol NSSecureCoding><NSObject;

#import <Foundation/Foundation.h>


@interface DTXMessage : NSObject {
    unsigned int _messageType;
    int _compressionType;
    NSData *_serializedData;
    id<NSSecureCoding><NSObject> *_payloadObject;
    *void _auxiliary;
    uint8_t _immutable;
    NSDictionary *_auxiliaryPromoted;
}


@property (nonatomic) unsigned int channelCode; // ivar: _channelCode
@property (nonatomic) unsigned int conversationIndex; // ivar: _conversationIndex
@property (readonly, nonatomic) NSUInteger cost; // ivar: _cost
@property (readonly, nonatomic) NSData *data; // ivar: _payloadData
@property (readonly, nonatomic) BOOL deserialized; // ivar: _deserialized
@property (retain, nonatomic) NSError *error;
@property (nonatomic) unsigned int errorStatus; // ivar: _status
@property (nonatomic) BOOL expectsReply; // ivar: _expectsReply
@property (nonatomic) unsigned int identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isBarrier;
@property (readonly, nonatomic) BOOL isDispatch;
@property (nonatomic) unsigned int messageType;
@property (readonly, nonatomic) NSObject<NSSecureCoding><NSObject> *object;
@property (copy, nonatomic) NSObject<NSSecureCoding><NSObject> *payloadObject;
@property (readonly, nonatomic) NSUInteger serializedLength;


+(BOOL)extractSerializedCompressionInfoFromBuffer:(char *)arg0 length:(NSUInteger)arg1 compressionType:(*int)arg2 uncompressedLength:(*NSUInteger)arg3 compressedDataOffset:(*NSUInteger)arg4 ;
+(id)defaultAllowedSecureCodingClasses;
+(id)message;
+(id)messageReferencingBuffer:(*void)arg0 length:(NSUInteger)arg1 destructor:(id)arg2 ;
+(id)messageWithBuffer:(*void)arg0 length:(NSUInteger)arg1 ;
+(id)messageWithData:(id)arg0 ;
+(id)messageWithError:(id)arg0 ;
+(id)messageWithObject:(id)arg0 ;
+(id)messageWithPrimitive:(*void)arg0 ;
+(id)messageWithSelector:(SEL)arg0 arguments:(id)arg1 ;
+(id)messageWithSelector:(SEL)arg0 objectArguments:(id)arg1 ;
+(id)messageWithSelector:(SEL)arg0 typesAndArguments:(unsigned int)arg1 ;
+(void)initialize;
+(void)setReportCompressionBlock:(id)arg0 ;
-(*void)getBufferWithReturnedLength:(*NSUInteger)arg0 ;
-(BOOL)shouldInvokeWithTarget:(id)arg0 ;
-(NSInteger)integerForMessageKey:(id)arg0 ;
-(id)_decompressedData:(id)arg0 compressor:(id)arg1 compressionType:(int)arg2 ;
-(id)_faultAuxiliaryValueOfType:(Class)arg0 forKey:(id)arg1 ;
-(id)_initWithReferencedSerializedForm:(id)arg0 compressor:(id)arg1 payloadSet:(id)arg2 ;
-(id)_mutableAuxiliaryDictionary;
-(id)dataForMessageKey:(id)arg0 ;
-(id)description;
-(id)descriptionWithRoutingInformation:(struct DTXMessageRoutingInfo )arg0 ;
-(id)initWithInvocation:(id)arg0 ;
-(id)initWithSelector:(SEL)arg0 firstArg:(id)arg1 remainingObjectArgs:(char *)arg2 ;
-(id)initWithSelector:(SEL)arg0 objects:(id)arg1 ;
// -(id)initWithSerializedForm:(char *)arg0 length:(NSUInteger)arg1 destructor:(id)arg2 compressor:(unk)arg3  ;
-(id)initWithSerializedForm:(id)arg0 compressor:(id)arg1 ;
-(id)newReply;
-(id)newReplyReferencingBuffer:(*void)arg0 length:(NSUInteger)arg1 destructor:(id)arg2 ;
-(id)newReplyWithError:(id)arg0 ;
-(id)newReplyWithMessage:(id)arg0 ;
-(id)newReplyWithObject:(id)arg0 ;
-(id)objectWithAllowedClasses:(id)arg0 ;
-(id)stringForMessageKey:(id)arg0 ;
-(id)valueForMessageKey:(id)arg0 ;
-(void)_appendTypesAndValues:(unsigned int)arg0 withKey:(id)arg1 list:(char *)arg2 ;
-(void)_makeBarrier;
-(void)_makeImmutable;
-(void)_setPayloadBuffer:(char *)arg0 length:(NSUInteger)arg1 shouldCopy:(BOOL)arg2 destructor:(id)arg3 ;
-(void)_willModifyAuxiliary;
-(void)compressWithCompressor:(id)arg0 usingType:(int)arg1 forCompatibilityWithVersion:(NSInteger)arg2 ;
-(void)dealloc;
-(void)invokeWithTarget:(id)arg0 replyChannel:(id)arg1 validator:(id)arg2 ;
-(void)serializedFormApply:(id)arg0 ;
-(void)setInteger:(NSInteger)arg0 forMessageKey:(id)arg1 ;
-(void)setString:(id)arg0 forMessageKey:(id)arg1 ;


@end


#endif