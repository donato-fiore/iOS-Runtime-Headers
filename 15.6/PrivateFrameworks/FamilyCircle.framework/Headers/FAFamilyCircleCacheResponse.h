// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FAFAMILYCIRCLECACHERESPONSE_H
#define FAFAMILYCIRCLECACHERESPONSE_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "FAFamilyCircle.h"

@interface FAFamilyCircleCacheResponse : NSObject

@property (retain, nonatomic) NSDate *cacheDate; // ivar: _cacheDate
@property (retain, nonatomic) FAFamilyCircle *familyCircle; // ivar: _familyCircle
@property (nonatomic) CGFloat maxAge; // ivar: _maxAge


-(BOOL)_isFamilyCircleFresh:(id)arg0 ;
-(BOOL)isFamilyCircleFresh;
-(id)familyCircleValidatingAgeWithDate:(id)arg0 ;
-(id)initWithFamilyCircle:(id)arg0 cacheDate:(id)arg1 maxAge:(CGFloat)arg2 ;


@end


#endif