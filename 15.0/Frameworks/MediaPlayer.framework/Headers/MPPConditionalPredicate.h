// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPPCONDITIONALPREDICATE_H
#define MPPCONDITIONALPREDICATE_H

@class PBCodable;
@protocol NSCopying;


#import "MPPMediaPredicate.h"

@interface MPPConditionalPredicate : PBCodable <NSCopying>



@property (retain, nonatomic) MPPMediaPredicate *conditionalPredicate; // ivar: _conditionalPredicate
@property (retain, nonatomic) MPPMediaPredicate *elsePredicate; // ivar: _elsePredicate
@property (readonly, nonatomic) BOOL hasConditionalPredicate;
@property (readonly, nonatomic) BOOL hasElsePredicate;
@property (readonly, nonatomic) BOOL hasThenPredicate;
@property (retain, nonatomic) MPPMediaPredicate *thenPredicate; // ivar: _thenPredicate


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)writeTo:(id)arg0 ;


@end


#endif