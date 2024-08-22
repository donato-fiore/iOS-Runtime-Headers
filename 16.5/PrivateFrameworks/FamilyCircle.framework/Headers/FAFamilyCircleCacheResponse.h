// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FAFAMILYCIRCLECACHERESPONSE_H
#define FAFAMILYCIRCLECACHERESPONSE_H

@class NSDate, NSString;

#import <Foundation/Foundation.h>

#import "FAFamilyCircle.h"

@interface FAFamilyCircleCacheResponse : NSObject

@property (retain, nonatomic) NSDate *cacheDate; // ivar: _cacheDate
@property (readonly, nonatomic) NSDate *expiration;
@property (retain, nonatomic) FAFamilyCircle *familyCircle; // ivar: _familyCircle
@property (nonatomic) CGFloat maxAge; // ivar: _maxAge
@property (copy, nonatomic) NSString *serverTag; // ivar: _serverTag


-(BOOL)_isFamilyCircleFresh:(id)arg0 ;
-(BOOL)isFamilyCircleFresh;
-(id)familyCircleValidatingAgeWithDate:(id)arg0 ;
-(id)initWithFamilyCircle:(id)arg0 serverTag:(id)arg1 cacheDate:(id)arg2 maxAge:(CGFloat)arg3 ;


@end


#endif