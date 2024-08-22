// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIIMAGEPROVIDER_H
#define CNUIIMAGEPROVIDER_H


#import <Foundation/Foundation.h>


@interface CNUIImageProvider : NSObject



+(id)cacheKeyForImageResourceName:(id)arg0 template:(BOOL)arg1 ;
+(id)imageForResource:(id)arg0 ;
+(id)imageForResource:(id)arg0 template:(BOOL)arg1 ;
+(id)imageForResource:(id)arg0 template:(BOOL)arg1 onCacheMiss:(id)arg2 ;
+(id)uncachedImageForResource:(id)arg0 template:(BOOL)arg1 ;


@end


#endif