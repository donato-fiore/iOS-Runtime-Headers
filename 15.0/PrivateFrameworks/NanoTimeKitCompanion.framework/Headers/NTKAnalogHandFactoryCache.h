// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKANALOGHANDFACTORYCACHE_H
#define NTKANALOGHANDFACTORYCACHE_H

@class BSUIMappedImageCache;



@interface NTKAnalogHandFactoryCache : BSUIMappedImageCache



+(id)sharedInstance;
+(void)purge;


@end


#endif