// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSPEECHSYNTHESISUTILS_H
#define SFSPEECHSYNTHESISUTILS_H


#import <Foundation/Foundation.h>


@interface SFSpeechSynthesisUtils : NSObject



+(BOOL)isInternalBuild;
+(CGFloat)absoluteTimeToSecond:(NSUInteger)arg0 ;
+(NSInteger)footprintFromString:(id)arg0 ;
+(NSInteger)genderFromString:(id)arg0 ;
+(NSInteger)typeFromString:(id)arg0 ;
+(id)footprintStringFromFootprint:(NSInteger)arg0 ;
+(id)genderStringFromGender:(NSInteger)arg0 ;
+(id)typeStringFromType:(NSInteger)arg0 ;


@end


#endif