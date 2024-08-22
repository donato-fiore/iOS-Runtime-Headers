// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BMUSERPROOFINGEVENT_H
#define BMUSERPROOFINGEVENT_H

@class NSString;
@protocol BMStoreData, BMProtoBufWrapper, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BMUserProofingEvent : NSObject <BMStoreData, BMProtoBufWrapper, NSSecureCoding>



@property (readonly, nonatomic) CGFloat absoluteTimestamp; // ivar: _absoluteTimestamp
@property (readonly, nonatomic) NSString *age; // ivar: _age
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *deviceLanguage; // ivar: _deviceLanguage
@property (readonly, nonatomic) NSString *deviceRegion;
@property (readonly, nonatomic) NSString *ethnicity; // ivar: _ethnicity
@property (readonly, nonatomic) NSString *gender; // ivar: _gender
@property (readonly, nonatomic) NSString *gestureAssessment; // ivar: _gestureAssessment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *issuer; // ivar: _issuer
@property (readonly, nonatomic) NSString *livenessAssessment; // ivar: _livenessAssessment
@property (readonly, nonatomic) NSString *proofingDecision; // ivar: _proofingDecision
@property (readonly, nonatomic) NSString *skinTone; // ivar: _skinTone
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 age:(id)arg1 gender:(id)arg2 skinTone:(id)arg3 ethnicity:(id)arg4 deviceLanguage:(id)arg5 proofingDecision:(id)arg6 issuer:(id)arg7 ;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 age:(id)arg1 gender:(id)arg2 skinTone:(id)arg3 ethnicity:(id)arg4 deviceLanguage:(id)arg5 proofingDecision:(id)arg6 issuer:(id)arg7 livenessAssessment:(id)arg8 gestureAssessment:(id)arg9 ;
-(id)initWithAbsoluteTimestamp:(CGFloat)arg0 age:(id)arg1 gender:(id)arg2 skinTone:(id)arg3 ethnicity:(id)arg4 deviceRegion:(id)arg5 proofingDecision:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif