// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _PHANIMATEDIMAGELOADOPERATION_H
#define _PHANIMATEDIMAGELOADOPERATION_H

@class NSOperation, NSURL;


#import "PHAnimatedImage.h"

@interface _PHAnimatedImageLoadOperation : NSOperation {
    NSInteger _cacheStrategy;
    BOOL _useSharedImageDecoding;
    NSURL *_animatedImageURL;
}


@property (retain) PHAnimatedImage *animatedImage; // ivar: _animatedImage


+(NSInteger)nextRequestID;
+(id)_removeOperation:(NSInteger)arg0 ;
+(id)_requestIsolationQueue;
+(void)_registerOperation:(id)arg0 forRequestID:(NSInteger)arg1 ;
-(id)initWithURL:(id)arg0 cachingStrategy:(NSInteger)arg1 useSharedDecoding:(BOOL)arg2 ;
-(void)main;


@end


#endif