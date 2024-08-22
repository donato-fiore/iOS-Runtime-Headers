// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CPCARDVIEWDISAPPEARFEEDBACK_H
#define _CPCARDVIEWDISAPPEARFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPCardViewDisappearFeedback, NSSecureCoding;


#import "_CPCardForFeedback.h"

@interface _CPCardViewDisappearFeedback : PBCodable <_CPProcessableFeedback, _CPCardViewDisappearFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (retain, nonatomic) _CPCardForFeedback *card; // ivar: _card
@property (nonatomic) int cardDisappearEvent; // ivar: _cardDisappearEvent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
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