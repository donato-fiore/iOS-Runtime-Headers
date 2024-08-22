// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRUFEATUREFLAGPROVIDER_H
#define MRUFEATUREFLAGPROVIDER_H


#import <Foundation/Foundation.h>


@interface MRUFeatureFlagProvider : NSObject



+(BOOL)isDynamicCoversheetEnabled;
+(BOOL)isMediaSuggestionsUnlockedEnabled;
+(BOOL)isVolumeHUDSymbolsEnabled;


@end


#endif