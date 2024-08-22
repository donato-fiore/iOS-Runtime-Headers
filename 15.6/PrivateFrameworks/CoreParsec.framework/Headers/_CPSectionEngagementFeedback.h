// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPSECTIONENGAGEMENTFEEDBACK_H
#define _CPSECTIONENGAGEMENTFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPSectionEngagementFeedback, NSSecureCoding;


#import "_CPResultSectionForFeedback.h"

@interface _CPSectionEngagementFeedback : PBCodable <_CPProcessableFeedback, _CPSectionEngagementFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) _CPResultSectionForFeedback *section; // ivar: _section
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