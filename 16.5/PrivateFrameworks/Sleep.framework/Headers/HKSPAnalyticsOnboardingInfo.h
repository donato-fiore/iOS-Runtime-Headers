// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPANALYTICSONBOARDINGINFO_H
#define HKSPANALYTICSONBOARDINGINFO_H


#import <Foundation/Foundation.h>


@interface HKSPAnalyticsOnboardingInfo : NSObject

@property (readonly, nonatomic) NSUInteger action; // ivar: _action
@property (readonly, nonatomic) NSUInteger entryPoint; // ivar: _entryPoint
@property (readonly, nonatomic) NSUInteger step; // ivar: _step


-(id)initWithStep:(NSUInteger)arg0 action:(NSUInteger)arg1 entryPoint:(NSUInteger)arg2 ;


@end


#endif