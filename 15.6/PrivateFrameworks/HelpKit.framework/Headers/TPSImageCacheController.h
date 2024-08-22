// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TPSIMAGECACHECONTROLLER_H
#define TPSIMAGECACHECONTROLLER_H



#import "TPSDataCacheController.h"

@interface TPSImageCacheController : TPSDataCacheController



+(id)defaultInMemoryImageCache;
+(id)sharedInstance;
-(BOOL)isURLValid:(id)arg0 ;
-(id)formattedDataWithData:(id)arg0 ;
-(id)formattedDataWithFileURL:(id)arg0 ;
-(id)getImageForPath:(id)arg0 ;
-(id)imageFromMemoryCacheForPath:(id)arg0 ;
-(id)newDataCache;
-(void)addInMemoryCacheForImage:(id)arg0 identifier:(id)arg1 cost:(NSUInteger)arg2 ;
-(void)addInMemoryCacheForImage:(id)arg0 path:(id)arg1 cost:(NSUInteger)arg2 ;
-(void)commonInit;
-(void)formattedDataWithFileURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllDataCache;
-(void)removeInMemoryCache;
-(void)removeInMemoryCacheForPath:(id)arg0 ;


@end


#endif