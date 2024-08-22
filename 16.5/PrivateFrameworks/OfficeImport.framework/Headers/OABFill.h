// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OABFILL_H
#define OABFILL_H


#import <Foundation/Foundation.h>


@interface OABFill : NSObject



+(id)patternFromBlipId:(unsigned int)arg0 blipName:(id)arg1 blipDataReference:(struct EshBlip *)arg2 state:(id)arg3 ;
+(id)readFillFromFillPropertiesManager:(id)arg0 state:(id)arg1 ;
+(void)addStopsFromArray:(struct OABGradientStop *)arg0 stopCount:(int)arg1 inverted:(BOOL)arg2 startPos:(float)arg3 endPos:(float)arg4 toStopArray:(id)arg5 fillPropertiesManager:(id)arg6 ;
+(void)readGradientFill:(id)arg0 fromFillPropertiesManager:(id)arg1 state:(id)arg2 ;
+(void)readImageFill:(id)arg0 fromFillPropertiesManager:(id)arg1 state:(id)arg2 ;


@end


#endif