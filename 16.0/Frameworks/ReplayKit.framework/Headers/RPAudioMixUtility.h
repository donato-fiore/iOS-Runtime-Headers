// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RPAUDIOMIXUTILITY_H
#define RPAUDIOMIXUTILITY_H


#import <Foundation/Foundation.h>


@interface RPAudioMixUtility : NSObject



+(id)tempFileURL;
+(void)mixAudioForMovie:(id)arg0 finalMovieURL:(id)arg1 withCompletionHandler:(id)arg2 ;
+(void)mixAudioForMovie:(id)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif