// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CRKIMAGELOADER_H
#define _CRKIMAGELOADER_H

@class INUIImageLoader, NSString;
@protocol SFResourceLoader, _CRKImageLoaderDelegate;

#import <Foundation/Foundation.h>


@interface _CRKImageLoader : NSObject <SFResourceLoader>

 {
    INUIImageLoader *_imageLoader;
}


@property (nonatomic) BOOL active; // ivar: _active
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_CRKImageLoaderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(id)sharedInstanceWithInitialDelegate:(id)arg0 ;
-(BOOL)loadImage:(id)arg0 withCompletionHandler:(id)arg1 ;
-(id)resourceIdentifierForLocalImageType:(int)arg0 ;
-(void)_loadSFImageForURL:(id)arg0 completion:(id)arg1 ;
-(void)_registerWithSearchFoundation;
-(void)_unregisterWithSearchFoundaton;


@end


#endif