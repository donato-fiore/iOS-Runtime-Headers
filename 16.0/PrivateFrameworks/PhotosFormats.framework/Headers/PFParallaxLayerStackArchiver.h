// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFPARALLAXLAYERSTACKARCHIVER_H
#define PFPARALLAXLAYERSTACKARCHIVER_H


#import <Foundation/Foundation.h>


@interface PFParallaxLayerStackArchiver : NSObject



+(BOOL)saveLayerStack:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)loadLayerStackFromURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif