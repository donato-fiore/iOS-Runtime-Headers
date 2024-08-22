// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPSTORECARDSECTIONENGAGEMENTFEEDBACK_H
#define _CPSTORECARDSECTIONENGAGEMENTFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPStoreCardSectionEngagementFeedback, NSSecureCoding;


#import "_CPCardSectionForFeedback.h"
#import "_CPPunchoutForFeedback.h"

@interface _CPStoreCardSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPStoreCardSectionEngagementFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (nonatomic) int actionCardType; // ivar: _actionCardType
@property (retain, nonatomic) _CPCardSectionForFeedback *cardSection; // ivar: _cardSection
@property (copy, nonatomic) NSString *cardSectionId; // ivar: _cardSectionId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _CPPunchoutForFeedback *destination; // ivar: _destination
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int productPageResult; // ivar: _productPageResult
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