// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _VUIMONOGRAMIMAGELOADER_H
#define _VUIMONOGRAMIMAGELOADER_H

@class NSDictionary, NSString;
@protocol VUIImageLoader;

#import <Foundation/Foundation.h>


@interface _VUIMonogramImageLoader : NSObject <VUIImageLoader>

 {
    NSDictionary *_generatorByType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)URLForObject:(id)arg0 ;
-(id)_imageLoadError;
-(id)imageKeyForObject:(id)arg0 ;
-(id)init;
-(id)loadImageForObject:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(void)cancelLoad:(id)arg0 ;


@end


#endif