// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPSKIPSEARCHFEEDBACK_H
#define _CPSKIPSEARCHFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPSkipSearchFeedback, NSSecureCoding;



@interface _CPSkipSearchFeedback : PBCodable <_CPProcessableFeedback, _CPSkipSearchFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (copy, nonatomic) NSString *experimentNamespaceId; // ivar: _experimentNamespaceId
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *input; // ivar: _input
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (copy, nonatomic) NSString *treatmentId; // ivar: _treatmentId
@property (nonatomic) int triggerEvent; // ivar: _triggerEvent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithTriggerEvent:(int)arg0 input:(id)arg1 ;
-(id)initWithTriggerEvent:(int)arg0 input:(id)arg1 experimentId:(id)arg2 treatmentId:(id)arg3 ;
-(void)writeTo:(id)arg0 ;


@end


#endif