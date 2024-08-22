// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVSYMBOLIMAGELOADER_H
#define _TVSYMBOLIMAGELOADER_H

@class NSOperationQueue, NSString;
@protocol TVImageLoader;

#import <Foundation/Foundation.h>


@interface _TVSymbolImageLoader : NSObject <TVImageLoader>

 {
    NSOperationQueue *_imageLoaderQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)hasImageCache;
-(id)URLForObject:(id)arg0 ;
-(id)imageKeyForObject:(id)arg0 ;
-(id)init;
-(id)loadImageForObject:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(void)cancelLoad:(id)arg0 ;


@end


#endif