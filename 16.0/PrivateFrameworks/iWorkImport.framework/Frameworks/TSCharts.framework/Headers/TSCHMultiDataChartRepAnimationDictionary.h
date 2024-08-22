// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHMULTIDATACHARTREPANIMATIONDICTIONARY_H
#define TSCHMULTIDATACHARTREPANIMATIONDICTIONARY_H

@class TSURetainedPointerKeyDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface TSCHMultiDataChartRepAnimationDictionary : NSObject {
    TSURetainedPointerKeyDictionary *_entries;
}


@property (readonly, nonatomic) NSDictionary *animationDictionaryForBuildEngine;


+(id)dictionary;
-(id)entryForLayer:(id)arg0 ;
-(id)init;
-(id)nonretainedValueForObject:(id)arg0 ;
-(void)addAnimation:(id)arg0 animationInfo:(id)arg1 forLayer:(id)arg2 ;
-(void)addEntriesFromAnimationDictionary:(id)arg0 beginTime:(CGFloat)arg1 duration:(CGFloat)arg2 interpolations:(id)arg3 ;


@end


#endif