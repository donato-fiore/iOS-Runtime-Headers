// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMAGEFILELOADER_H
#define IMAGEFILELOADER_H

@class NSString;
@protocol SFImageResourceLoader, SFAsyncResourceLoader;

#import <Foundation/Foundation.h>


@interface ImageFileLoader : NSObject <SFImageResourceLoader, SFAsyncResourceLoader>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)canLoadImage:(id)arg0 context:(id)arg1 ;
-(id)cardLoader;
-(id)imageLoader;
-(id)moreResultsLoader;
-(id)urlForImage:(id)arg0 context:(id)arg1 ;
-(void)loadImage:(id)arg0 context:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif