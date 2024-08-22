// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HREACTIONVARIANCE_H
#define HREACTIONVARIANCE_H

@class NSString;


#import "HRERule.h"

@interface HREActionVariance : HRERule

@property (readonly, nonatomic) NSString *key; // ivar: _key


+(id)varianceKeyForAction:(id)arg0 ;
-(BOOL)passesForAction:(id)arg0 ;
-(id)_initWithKey:(id)arg0 ;


@end


#endif