// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPLOOKUPHINTRELEVANCYFEEDBACK_H
#define _CPLOOKUPHINTRELEVANCYFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPLookupHintRelevancyFeedback, NSSecureCoding;


#import "_CPRange.h"

@interface _CPLookupHintRelevancyFeedback : PBCodable <_CPProcessableFeedback, _CPLookupHintRelevancyFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (copy, nonatomic) NSString *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL discarded; // ivar: _discarded
@property (copy, nonatomic) NSString *domain; // ivar: _domain
@property (nonatomic) int grade; // ivar: _grade
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _CPRange *hintRange; // ivar: _hintRange
@property (readonly, nonatomic) NSData *jsonData;
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