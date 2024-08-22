// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MXASSETSTORAGE_H
#define _MXASSETSTORAGE_H

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _MXAssetStorage : NSObject {
    NSObject<OS_dispatch_queue> *_lock;
    NSMutableDictionary *_storage;
    NSMutableSet *_loadingKeys;
    NSMutableDictionary *_fetchBlocks;
}




-(id)init;
-(void)fetchAssetForKey:(id)arg0 completion:(id)arg1 ;
-(void)loadAssetForKey:(id)arg0 withBlock:(id)arg1 ;
-(void)setAsset:(id)arg0 forKey:(id)arg1 ;


@end


#endif