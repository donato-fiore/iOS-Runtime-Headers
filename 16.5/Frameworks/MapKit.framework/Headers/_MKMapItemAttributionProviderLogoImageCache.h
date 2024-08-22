// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MKMAPITEMATTRIBUTIONPROVIDERLOGOIMAGECACHE_H
#define _MKMAPITEMATTRIBUTIONPROVIDERLOGOIMAGECACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface _MKMapItemAttributionProviderLogoImageCache : NSObject {
    NSCache *_cache;
}




+(id)sharedInstance;
-(id)imageForKey:(id)arg0 ;
-(id)init;
-(void)setImage:(id)arg0 forKey:(id)arg1 ;


@end


#endif