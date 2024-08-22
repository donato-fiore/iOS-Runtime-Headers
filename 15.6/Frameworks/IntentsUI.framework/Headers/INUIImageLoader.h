// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INUIIMAGELOADER_H
#define INUIIMAGELOADER_H

@class NSString;
@protocol SFResourceLoader, INImageLoading, INUIImageLoaderDelegate;

#import <Foundation/Foundation.h>


@interface INUIImageLoader : NSObject <SFResourceLoader, INImageLoading>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<INUIImageLoaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *serviceIdentifier;
@property (readonly, nonatomic) NSUInteger servicePriority;
@property (readonly) Class superclass;


+(id)registeredImageLoaderWithScreenDelegate;
-(BOOL)canLoadImageDataForImage:(id)arg0 ;
-(BOOL)loadImage:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)dealloc;
-(void)deregisterWithIntents;
-(void)deregisterWithSearchFoundation;
-(void)loadDataImageFromImage:(id)arg0 usingPortableImageLoader:(id)arg1 scaledSize:(struct ? )arg2 completion:(id)arg3 ;
-(void)registerWithIntents;
-(void)registerWithSearchFoundation;


@end


#endif