// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBSLIDEBASE_H
#define PBSLIDEBASE_H


#import <Foundation/Foundation.h>


@interface PBSlideBase : NSObject



+(BOOL)readColorScheme:(id)arg0 colorScheme:(id)arg1 colorMap:(id)arg2 state:(id)arg3 ;
+(BOOL)slideFollowsMasterBackground:(id)arg0 ;
+(NSUInteger)authorIdForName:(id)arg0 state:(id)arg1 ;
+(id)newOptions:(NSInteger)arg0 transType:(int)arg1 ;
+(id)nonPlaceholderDrawablesAmongDrawables:(id)arg0 ;
+(int)parseTransType:(int)arg0 direction:(NSInteger)arg1 ;
+(unsigned char)mapDirection:(id)arg0 ;
+(void)mapSlideNumberPlaceholder:(id)arg0 tgtSlideBase:(id)arg1 state:(id)arg2 ;
+(void)parseSlideShowInfo:(struct PptSSSlideInfoAtom *)arg0 slideBase:(id)arg1 state:(id)arg2 ;
+(void)readComments:(id)arg0 slide:(id)arg1 state:(id)arg2 ;
+(void)readDrawingGroup:(id)arg0 slide:(id)arg1 state:(id)arg2 ;


@end


#endif