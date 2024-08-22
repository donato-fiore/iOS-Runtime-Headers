// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROMOODTITLECONTROLLER_H
#define MIROMOODTITLECONTROLLER_H


#import <Foundation/Foundation.h>


@interface MiroMoodTitleController : NSObject



+(id)blueprintSupportingTitle:(id)arg0 subtitle:(id)arg1 blueprint:(id)arg2 ;
+(id)blueprintSupportingTitle:(id)arg0 subtitle:(id)arg1 fontName:(id)arg2 ;
+(id)titleDefinitionWithTitle:(id)arg0 subtitle:(id)arg1 blueprint:(id)arg2 titleAdjustedBlueprint:(id)arg3 additionalTitleEffectSettings:(id)arg4 asset:(id)arg5 analysisTime:(int)arg6 timeToGetColorAnalysis:(*CGFloat)arg7 ;
+(id)titleDefinitionWithTitle:(id)arg0 subtitle:(id)arg1 effectID:(id)arg2 parametersDictionary:(id)arg3 additionalTitleEffectSettings:(id)arg4 moodID:(id)arg5 ;


@end


#endif