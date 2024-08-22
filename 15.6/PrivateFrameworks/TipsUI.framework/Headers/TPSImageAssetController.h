// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSIMAGEASSETCONTROLLER_H
#define TPSIMAGEASSETCONTROLLER_H


#import <Foundation/Foundation.h>


@interface TPSImageAssetController : NSObject



+(id)dataCacheForIdentifier:(id)arg0 ;
+(id)defaultInMemoryImageCache;
+(id)formattedDataForPath:(id)arg0 identifier:(id)arg1 priority:(float)arg2 completionHandler:(id)arg3 ;
+(id)getImageForIdentifier:(id)arg0 ;
+(id)imageFromMemoryCacheForIdentifier:(id)arg0 ;
+(void)addInMemoryCacheForImage:(id)arg0 identifier:(id)arg1 cost:(NSUInteger)arg2 ;
+(void)removeInMemoryCache;


@end


#endif