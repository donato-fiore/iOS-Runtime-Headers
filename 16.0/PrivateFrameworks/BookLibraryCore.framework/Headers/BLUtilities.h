// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLUTILITIES_H
#define BLUTILITIES_H


#import <Foundation/Foundation.h>


@interface BLUtilities : NSObject



+(BOOL)isAudioBookFromBuyParameters:(id)arg0 ;
+(BOOL)isPreOrderFromBuyParameters:(id)arg0 ;
+(id)buyParametersValueForKey:(id)arg0 fromBuyParams:(id)arg1 ;
+(id)storeIDFromBuyParameters:(id)arg0 ;


@end


#endif