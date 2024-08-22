// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKIMAGEUTILITY_H
#define NNMKIMAGEUTILITY_H


#import <Foundation/Foundation.h>


@interface NNMKImageUtility : NSObject



+(void)scaleImageFromData:(id)arg0 destinationData:(id)arg1 maxWidth:(float)arg2 ;
+(void)scaleImageFromData:(id)arg0 destinationURL:(id)arg1 maxWidth:(float)arg2 ;
+(void)scaleImageFromURL:(id)arg0 destinationURL:(id)arg1 maxWidth:(float)arg2 ;
+(void)scaleImageFromURL:(id)arg0 imageData:(id)arg1 destinationURL:(id)arg2 destinationData:(id)arg3 maxWidth:(float)arg4 ;


@end


#endif