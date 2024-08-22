// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHARETIMECONFIGURATION_H
#define PKPASSSHARETIMECONFIGURATION_H

@class NSDate, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassShareTimeConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) NSArray *schedules; // ivar: _schedules
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (nonatomic) NSUInteger support; // ivar: _support


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassShareTimeConfiguration:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)intersect:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif