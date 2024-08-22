// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCHMULTIDATACHARTREPANIMATIONDICTIONARYENTRY_H
#define TSCHMULTIDATACHARTREPANIMATIONDICTIONARYENTRY_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSCHMultiDataLayerAnimationInfo.h"

@interface TSCHMultiDataChartRepAnimationDictionaryEntry : NSObject {
    TSCHMultiDataLayerAnimationInfo *_animationInfo;
    NSMutableArray *_animations;
}




+(id)entry;
-(id)animation;
-(id)init;
-(void)addAnimation:(id)arg0 animationInfo:(id)arg1 ;


@end


#endif