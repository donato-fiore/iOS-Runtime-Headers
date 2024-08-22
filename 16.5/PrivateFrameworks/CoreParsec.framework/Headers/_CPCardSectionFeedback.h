// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CPCARDSECTIONFEEDBACK_H
#define _CPCARDSECTIONFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPCardSectionFeedback, NSSecureCoding;


#import "_CPCardSectionForFeedback.h"

@interface _CPCardSectionFeedback : PBCodable <_CPProcessableFeedback, _CPCardSectionFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (retain, nonatomic) _CPCardSectionForFeedback *cardSection; // ivar: _cardSection
@property (copy, nonatomic) NSString *cardSectionId; // ivar: _cardSectionId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *resultId; // ivar: _resultId
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger timestamp;
@property (nonatomic) NSUInteger timestamp;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)init;
-(id)initWithFacade:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif