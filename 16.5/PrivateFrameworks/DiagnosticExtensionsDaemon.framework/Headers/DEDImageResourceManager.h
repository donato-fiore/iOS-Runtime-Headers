// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DEDIMAGERESOURCEMANAGER_H
#define DEDIMAGERESOURCEMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ResourceLoader.h"

@interface DEDImageResourceManager : NSObject

@property (retain) NSMutableDictionary *imageCache; // ivar: _imageCache
@property (retain) ResourceLoader *loader; // ivar: _loader


+(id)sharedInstance;
-(id)cachedImageFromKey:(id)arg0 ;
-(void)asynchronousDataFromURL:(id)arg0 key:(id)arg1 completionBlock:(id)arg2 ;


@end


#endif