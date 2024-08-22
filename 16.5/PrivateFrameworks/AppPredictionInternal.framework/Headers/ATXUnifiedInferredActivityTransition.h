// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUNIFIEDINFERREDACTIVITYTRANSITION_H
#define ATXUNIFIEDINFERREDACTIVITYTRANSITION_H

@class NSString;
@protocol BMStoreData, ATXTimedEventProtocol, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ATXUnifiedInferredActivityTransition : NSObject <BMStoreData, ATXTimedEventProtocol, ATXProtoBufWrapper, ATXJSONSerializableProtocol, NSSecureCoding>



@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger inferredActivityType; // ivar: _inferredActivityType
@property (readonly, nonatomic) BOOL isEntryEvent; // ivar: _isEntryEvent
@property (readonly, nonatomic) NSString *mode; // ivar: _mode
@property (readonly, nonatomic) NSString *source; // ivar: _source
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat transitionTime; // ivar: _transitionTime


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUnifiedInferredActivityTransition:(id)arg0 ;
-(NSUInteger)activityTypeAfterTransition;
-(id)encodeAsProto;
-(id)eventTime;
-(id)init;
-(id)initFromJSON:(id)arg0 ;
-(id)initFromTransitionTime:(CGFloat)arg0 isEntryEvent:(BOOL)arg1 source:(id)arg2 activityType:(NSUInteger)arg3 confidence:(CGFloat)arg4 ;
-(id)initFromTransitionTime:(CGFloat)arg0 isEntryEvent:(BOOL)arg1 source:(id)arg2 mode:(id)arg3 ;
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