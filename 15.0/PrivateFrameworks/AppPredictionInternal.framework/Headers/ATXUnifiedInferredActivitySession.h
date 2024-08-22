// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXUNIFIEDINFERREDACTIVITYSESSION_H
#define ATXUNIFIEDINFERREDACTIVITYSESSION_H

@class NSString;
@protocol BMStoreData, NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol;

#import <Foundation/Foundation.h>


@interface ATXUnifiedInferredActivitySession : NSObject <BMStoreData, NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat endTime; // ivar: _endTime
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger inferredActivityType; // ivar: _inferredActivityType
@property (readonly, nonatomic) NSString *inferredMode; // ivar: _inferredMode
@property (readonly, nonatomic) NSString *source; // ivar: _source
@property (readonly, nonatomic) CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUnifiedInferredActivitySession:(id)arg0 ;
-(id)encodeAsProto;
-(id)initFromJSON:(id)arg0 ;
-(id)initFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 inferredMode:(id)arg2 source:(id)arg3 ;
-(id)initFromStartTime:(CGFloat)arg0 endTime:(CGFloat)arg1 source:(id)arg2 activityType:(NSUInteger)arg3 confidence:(CGFloat)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoder_v1:(id)arg0 ;
-(id)initWithCoder_v2:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonRepresentation;
-(id)prettyRepresentation;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif