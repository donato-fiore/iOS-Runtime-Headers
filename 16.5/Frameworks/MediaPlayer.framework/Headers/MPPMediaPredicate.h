// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPPMEDIAPREDICATE_H
#define MPPMEDIAPREDICATE_H

@class PBCodable;
@protocol NSCopying;


#import "MPPCompoundPredicate.h"
#import "MPPConditionalPredicate.h"
#import "MPPPersistentIDsPredicate.h"
#import "MPPPropertyPredicate.h"
#import "MPPSearchStringPredicate.h"

@interface MPPMediaPredicate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) MPPCompoundPredicate *compoundPredicate; // ivar: _compoundPredicate
@property (retain, nonatomic) MPPConditionalPredicate *conditionalPredicate; // ivar: _conditionalPredicate
@property (readonly, nonatomic) BOOL hasCompoundPredicate;
@property (readonly, nonatomic) BOOL hasConditionalPredicate;
@property (readonly, nonatomic) BOOL hasPersistentIDsPredicate;
@property (readonly, nonatomic) BOOL hasPropertyPredicate;
@property (readonly, nonatomic) BOOL hasSearchStringPredicate;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) MPPPersistentIDsPredicate *persistentIDsPredicate; // ivar: _persistentIDsPredicate
@property (retain, nonatomic) MPPPropertyPredicate *propertyPredicate; // ivar: _propertyPredicate
@property (retain, nonatomic) MPPSearchStringPredicate *searchStringPredicate; // ivar: _searchStringPredicate
@property (nonatomic) int type; // ivar: _type


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