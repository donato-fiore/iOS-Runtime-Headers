// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSBOOSTRULEMATCH_H
#define TTSBOOSTRULEMATCH_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface TTSBoostRuleMatch : NSObject

@property (nonatomic) NSInteger boostRuleIndex; // ivar: _boostRuleIndex
@property (retain, nonatomic) NSArray *groupings; // ivar: _groupings
@property (nonatomic) _NSRange range; // ivar: _range
@property (retain, nonatomic) NSString *rule; // ivar: _rule


-(id)description;


@end


#endif