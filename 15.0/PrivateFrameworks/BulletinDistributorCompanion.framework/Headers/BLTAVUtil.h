// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTAVUTIL_H
#define BLTAVUTIL_H


#import <Foundation/Foundation.h>


@interface BLTAVUtil : NSObject



+(void)_transcodeVideoAsync:(id)arg0 outURL:(id)arg1 maxBytes:(NSUInteger)arg2 completionHandler:(id)arg3 ;
+(void)transcodeURL:(id)arg0 outURL:(id)arg1 maxBytes:(NSUInteger)arg2 completion:(id)arg3 ;


@end


#endif