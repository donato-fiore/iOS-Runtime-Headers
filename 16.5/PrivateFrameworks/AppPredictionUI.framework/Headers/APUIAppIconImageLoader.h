// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APUIAPPICONIMAGELOADER_H
#define APUIAPPICONIMAGELOADER_H

@class NSMutableDictionary, NSString;
@protocol SFResourceLoader, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface APUIAppIconImageLoader : NSObject <SFResourceLoader>

 {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_completionHandlers;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)loadImage:(id)arg0 withCompletionHandler:(id)arg1 ;
-(id)_blankIconImage;
-(id)init;
-(void)_getImageForArtwork:(id)arg0 completionHandler:(id)arg1 ;
-(void)_loadImageWithBundleIdentifier:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerImageLoader;


@end


#endif