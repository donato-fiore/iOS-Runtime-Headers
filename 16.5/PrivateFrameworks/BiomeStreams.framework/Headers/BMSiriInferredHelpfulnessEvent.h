// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMSIRIINFERREDHELPFULNESSEVENT_H
#define BMSIRIINFERREDHELPFULNESSEVENT_H

@class NSString;
@protocol BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating;

#import <Foundation/Foundation.h>


@interface BMSiriInferredHelpfulnessEvent : NSObject <BMStoreData, NSSecureCoding, BMProtoBufWrapper, BMStreamValidating>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat inferredHelpfulnessScore; // ivar: _inferredHelpfulnessScore
@property (readonly, copy, nonatomic) NSString *modelID; // ivar: _modelID
@property (readonly, nonatomic) CGFloat restatementScore; // ivar: _restatementScore
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *turnID; // ivar: _turnID


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isCompleteWithContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSiriInferredHelpfulnessEvent:(id)arg0 ;
-(BOOL)isValidWithContext:(id)arg0 error:(*id)arg1 ;
-(id)encodeAsProto;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 ;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 inferredHelpfulnessScore:(CGFloat)arg1 restatementScore:(CGFloat)arg2 turnID:(id)arg3 modelID:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif