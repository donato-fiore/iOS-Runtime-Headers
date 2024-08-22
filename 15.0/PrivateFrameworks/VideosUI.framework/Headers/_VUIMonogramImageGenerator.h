// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _VUIMONOGRAMIMAGEGENERATOR_H
#define _VUIMONOGRAMIMAGEGENERATOR_H

@class NSString, NSOperationQueue;
@protocol VUIImageLoader;

#import <Foundation/Foundation.h>


@interface _VUIMonogramImageGenerator : NSObject <VUIImageLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSOperationQueue *imageGeneratorQueue; // ivar: _imageGeneratorQueue
@property (readonly) Class superclass;


-(id)imageKeyForObject:(id)arg0 ;
-(id)loadImageForObject:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(id)loadImageForURL:(id)arg0 scaleToSize:(struct CGSize )arg1 cropToFit:(BOOL)arg2 imageDirection:(NSInteger)arg3 requestLoader:(id)arg4 completionHandler:(id)arg5 ;
-(void)cancelLoad:(id)arg0 ;


@end


#endif