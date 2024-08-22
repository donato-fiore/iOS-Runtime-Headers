// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXACTIONLOIBOOST_H
#define ATXACTIONLOIBOOST_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface ATXActionLOIBoost : NSObject {
    NSDictionary *_boostDictionary;
}




+(CGFloat)decayRateWithScale:(CGFloat)arg0 distance:(CGFloat)arg1 ;
+(id)sharedInstance;
-(CGFloat)boostForActionKey:(id)arg0 ;
-(id)initWithBoostDictionary:(id)arg0 ;


@end


#endif