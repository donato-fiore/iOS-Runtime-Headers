// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTTODAYRESULTS_H
#define NTTODAYRESULTS_H

@class NSDate, NSOrderedSet, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NTTodayResults : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSObject *assetsHoldToken; // ivar: _assetsHoldToken
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) CGFloat headlineScale; // ivar: _headlineScale
@property (readonly, nonatomic) int promotionCriterion; // ivar: _promotionCriterion
@property (readonly, nonatomic) NSObject *recordsHoldToken; // ivar: _recordsHoldToken
@property (readonly, copy, nonatomic) NSOrderedSet *sections; // ivar: _sections
@property (readonly, copy, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)itemCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceIdentifier:(id)arg0 sections:(id)arg1 expirationDate:(id)arg2 headlineScale:(CGFloat)arg3 ;
-(id)initWithSourceIdentifier:(id)arg0 sections:(id)arg1 promotionCriterion:(int)arg2 expirationDate:(id)arg3 headlineScale:(CGFloat)arg4 assetsHoldToken:(id)arg5 recordsHoldToken:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif