// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBRUNWORKFLOWINTENTRESPONSE_H
#define _INPBRUNWORKFLOWINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBRunWorkflowIntentResponse, NSSecureCoding, NSCopying;


#import "_INPBArchivedObject.h"

@interface _INPBRunWorkflowIntentResponse : PBCodable <_INPBRunWorkflowIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL continueRunning; // ivar: _continueRunning
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasContinueRunning;
@property (nonatomic) BOOL hasRequestsIntentExecution;
@property (readonly, nonatomic) BOOL hasUnderlyingIntent;
@property (readonly, nonatomic) BOOL hasUnderlyingIntentResponse;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (nonatomic) BOOL hasWaitingForResume;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL requestsIntentExecution; // ivar: _requestsIntentExecution
@property (copy, nonatomic) NSArray *steps; // ivar: _steps
@property (readonly, nonatomic) NSUInteger stepsCount;
@property (readonly) Class superclass;
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntent; // ivar: _underlyingIntent
@property (retain, nonatomic) _INPBArchivedObject *underlyingIntentResponse; // ivar: _underlyingIntentResponse
@property (copy, nonatomic) NSString *utterance; // ivar: _utterance
@property (nonatomic) BOOL waitingForResume; // ivar: _waitingForResume


+(BOOL)supportsSecureCoding;
+(Class)stepType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)stepAtIndex:(NSUInteger)arg0 ;
-(void)addStep:(id)arg0 ;
-(void)clearSteps;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif