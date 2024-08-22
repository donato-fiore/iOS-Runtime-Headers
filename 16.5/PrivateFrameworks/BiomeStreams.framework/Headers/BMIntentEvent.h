// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMINTENTEVENT_H
#define BMINTENTEVENT_H

@class NSString, NSData;
@protocol BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMIdentifiable, BMPublicStreamEvent;


#import "BMEventBase.h"

@interface BMIntentEvent : BMEventBase <BMEventAppAssociating, BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMIdentifiable, BMPublicStreamEvent>



@property (nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL donatedBySiri; // ivar: _donatedBySiri
@property (copy, nonatomic) NSString *groupIdentifier; // ivar: _groupIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *intentClass; // ivar: _intentClass
@property (nonatomic) NSInteger intentHandlingStatus; // ivar: _intentHandlingStatus
@property (nonatomic) NSInteger intentType; // ivar: _intentType
@property (copy, nonatomic) NSString *intentVerb; // ivar: _intentVerb
@property (copy, nonatomic) NSData *interaction; // ivar: _interaction
@property (nonatomic) NSInteger interactionDirection; // ivar: _interactionDirection
@property (copy, nonatomic) NSString *itemID; // ivar: _itemID
@property (copy, nonatomic) NSString *sourceId; // ivar: _sourceId
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(NSInteger)stream;
+(id)eventWithDKEvent:(id)arg0 ;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForCFAbsoluteTime:(CGFloat)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForuint32_t:(unsigned int)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithAbsoluteTime:(CGFloat)arg0 bundleId:(id)arg1 sourceId:(id)arg2 intentClass:(id)arg3 intentVerb:(id)arg4 intentType:(NSInteger)arg5 intentHandlingStatus:(NSInteger)arg6 interaction:(id)arg7 ;
-(id)initWithAbsoluteTime:(CGFloat)arg0 bundleId:(id)arg1 sourceId:(id)arg2 intentClass:(id)arg3 intentVerb:(id)arg4 intentType:(NSInteger)arg5 intentHandlingStatus:(NSInteger)arg6 interaction:(id)arg7 itemID:(id)arg8 ;
-(id)initWithAbsoluteTime:(CGFloat)arg0 bundleId:(id)arg1 sourceId:(id)arg2 intentClass:(id)arg3 intentVerb:(id)arg4 intentType:(NSInteger)arg5 intentHandlingStatus:(NSInteger)arg6 interaction:(id)arg7 itemID:(id)arg8 donatedBySiri:(BOOL)arg9 interactionDirection:(NSInteger)arg10 ;
-(id)initWithAbsoluteTime:(CGFloat)arg0 bundleId:(id)arg1 sourceId:(id)arg2 intentClass:(id)arg3 intentVerb:(id)arg4 intentType:(NSInteger)arg5 intentHandlingStatus:(NSInteger)arg6 interaction:(id)arg7 itemID:(id)arg8 donatedBySiri:(BOOL)arg9 interactionDirection:(NSInteger)arg10 groupIdentifier:(id)arg11 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif