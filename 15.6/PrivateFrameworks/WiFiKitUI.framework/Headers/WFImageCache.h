// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFIMAGECACHE_H
#define WFIMAGECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFImageCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *imageCache; // ivar: _imageCache


+(id)sharedImageCache;
-(BOOL)_isUIKitImageName:(id)arg0 ;
-(id)imageNamed:(id)arg0 ;
-(id)init;
-(void)clearCache;


@end


#endif