// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPCACHEHITFEEDBACK_H
#define _CPCACHEHITFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPFeedbackUUID, _CPCacheHitFeedback, NSSecureCoding;



@interface _CPCacheHitFeedback : PBCodable <_CPProcessableFeedback, _CPFeedbackUUID, _CPCacheHitFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *input; // ivar: _input
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) int triggerEvent; // ivar: _triggerEvent
@property (readonly, copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(void)writeTo:(id)arg0 ;


@end


#endif