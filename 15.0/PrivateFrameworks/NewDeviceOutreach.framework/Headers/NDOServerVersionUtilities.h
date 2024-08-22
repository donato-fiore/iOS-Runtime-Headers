// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NDOSERVERVERSIONUTILITIES_H
#define NDOSERVERVERSIONUTILITIES_H


#import <Foundation/Foundation.h>


@interface NDOServerVersionUtilities : NSObject



+(BOOL)isHighServerVersionFeaturesetEnabled;
+(id)readWebURLOverride;
+(void)_dictionaryFromURL:(id)arg0 withCompletion:(id)arg1 ;
+(void)_supportedVersionsForClientAndServer:(NSUInteger)arg0 withCompletion:(id)arg1 ;
+(void)isHighServerVersionFeaturesetEnabled:(NSUInteger)arg0 withCompletion:(id)arg1 ;
+(void)isHighServerVersionFeaturesetEnabled:(id)arg0 ;
+(void)serverVersionSupported:(id)arg0 ;


@end


#endif