// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTAVATARUPDATERFACTORY_H
#define AVTAVATARUPDATERFACTORY_H


#import <Foundation/Foundation.h>


@interface AVTAvatarUpdaterFactory : NSObject



+(id)updaterForAggregatingUpdaters:(SEL)arg0 ;
+(id)updaterForClearingColorsForCategory:(SEL)arg0 destination:(NSInteger)arg1 ;
+(id)updaterForColor:(SEL)arg0 colorsState:(id)arg1 pairedColors:(id)arg2 additionalColor:(id)arg3 ;
+(id)updaterForColor:(SEL)arg0 colorsState:(id)arg1 pairedColors:(id)arg2 additionalColor:(id)arg3 saveToColorsState:(id)arg4 ;
+(id)updaterForColor:(SEL)arg0 variationOverride:(id)arg1 colorsState:(id)arg2 pairedColors:(id)arg3 additionalColor:(id)arg4 saveToColorsState:(id)arg5 ;
+(id)updaterForPairingCategory:(SEL)arg0 colorsState:(id)arg1 ;
+(id)updaterForPreset:(SEL)arg0 pairedPreset:(id)arg1 ;


@end


#endif