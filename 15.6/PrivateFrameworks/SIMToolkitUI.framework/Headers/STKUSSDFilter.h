// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STKUSSDFILTER_H
#define STKUSSDFILTER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface STKUSSDFilter : NSObject

@property (readonly, copy, nonatomic) NSArray *alwaysFilteredPatterns; // ivar: _alwaysFilteredPatterns
@property (nonatomic) CGFloat lastWarningTime; // ivar: _lastWarningTime
@property (readonly, copy, nonatomic) NSArray *sometimesFilteredPatterns; // ivar: _sometimesFilteredPatterns


+(id)cachedExpressions;
-(BOOL)shouldFilterString:(id)arg0 coalescable:(*BOOL)arg1 ;
-(id)_matchesInString:(id)arg0 forPattern:(id)arg1 ;
-(id)initWithAlwaysFilteredPatterns:(id)arg0 sometimesFilteredPatterns:(id)arg1 ;
-(void)reset;


@end


#endif