// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPSIMAGELOADER_H
#define CPSIMAGELOADER_H


#import <Foundation/Foundation.h>

#import "CPSImageDownloader.h"
#import "CPSImageStore.h"
#import "CPSMapsImageLoader.h"

@interface CPSImageLoader : NSObject

@property (retain, nonatomic) CPSImageDownloader *imageDownloader; // ivar: _imageDownloader
@property (retain, nonatomic) CPSImageStore *imageStore; // ivar: _imageStore
@property (retain, nonatomic) CPSMapsImageLoader *mapsImageLoader; // ivar: _mapsImageLoader


-(id)init;
-(void)loadImageForGEOStyleAttributes:(id)arg0 completionHandler:(id)arg1 ;
-(void)loadImageForMapItemMUID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)loadImageWithURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif