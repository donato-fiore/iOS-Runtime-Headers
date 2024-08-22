// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICTHUMBNAILDATACACHE_H
#define ICTHUMBNAILDATACACHE_H

@class ICCache;

#import <Foundation/Foundation.h>


@interface ICThumbnailDataCache : NSObject

@property (retain, nonatomic) ICCache *imageCache; // ivar: _imageCache


-(id)init;
-(id)thumbnailDataForKey:(id)arg0 ;
-(void)removeAllThumbnailData;
-(void)removeThumbnailDataForKey:(id)arg0 ;
-(void)setThumbnailData:(id)arg0 forKey:(id)arg1 ;


@end


#endif