// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CPCARDVIEWAPPEARFEEDBACK_H
#define _CPCARDVIEWAPPEARFEEDBACK_H

@class PBCodable, NSString, NSData;
@protocol _CPProcessableFeedback, _CPCardViewAppearFeedback, NSSecureCoding;


#import "_CPCardForFeedback.h"

@interface _CPCardViewAppearFeedback : PBCodable <_CPProcessableFeedback, _CPCardViewAppearFeedback, NSSecureCoding>

 {
    NSUInteger _timestamp;
}


@property (retain, nonatomic) _CPCardForFeedback *card; // ivar: _card
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *fbr; // ivar: _fbr
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int level; // ivar: _level
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