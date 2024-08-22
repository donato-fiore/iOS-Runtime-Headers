// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTASSETRESOURCECACHE_H
#define AVTASSETRESOURCECACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface AVTAssetResourceCache : NSObject {
    NSMapTable *_resources;
}


@property (nonatomic) NSUInteger policy; // ivar: _policy


-(id)init;
-(id)resourceForAsset:(id)arg0 ;
-(void)releaseAsset:(id)arg0 ;
-(void)retainAsset:(id)arg0 ;


@end


#endif