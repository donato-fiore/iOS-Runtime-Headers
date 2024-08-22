// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BFMASSETBASE_H
#define BFMASSETBASE_H

@protocol BFMAsset;


#import "BCMResource.h"

@interface BFMAssetBase : BCMResource <BFMAsset>

 {
    ? $__lazy_storage_$_cache;
}


@property (nonatomic, readonly) BOOL isAudiobook;
@property (nonatomic, readonly) BOOL isBook;
@property (nonatomic, readonly) NSInteger type;




@end


#endif