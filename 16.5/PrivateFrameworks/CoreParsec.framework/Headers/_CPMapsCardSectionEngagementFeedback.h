// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPMAPSCARDSECTIONENGAGEMENTFEEDBACK_H
#define _CPMAPSCARDSECTIONENGAGEMENTFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPMapsCardSectionEngagementFeedback, NSSecureCoding;


#import "_CPPunchoutForFeedback.h"

@interface _CPMapsCardSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPMapsCardSectionEngagementFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (nonatomic) int actionCardType; // ivar: _actionCardType
@property (copy, nonatomic) NSString *cardSectionId; // ivar: _cardSectionId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _CPPunchoutForFeedback *destination; // ivar: _destination
@property (nonatomic) int feedbackType; // ivar: _feedbackType
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resultId; // ivar: _resultId
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) int triggerEvent; // ivar: _triggerEvent


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif