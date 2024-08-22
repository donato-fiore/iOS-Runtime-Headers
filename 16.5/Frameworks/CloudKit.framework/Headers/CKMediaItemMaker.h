// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKMEDIAITEMMAKER_H
#define CKMEDIAITEMMAKER_H


#import <Foundation/Foundation.h>

#import "_TtC8CloudKit17AssetStreamHandle.h"

@interface CKMediaItemMaker : NSObject

@property (readonly, nonatomic) _TtC8CloudKit17AssetStreamHandle *assetStreamHandle; // ivar: _assetStreamHandle


-(id)dataRepresentationWithError:(*id)arg0 ;
-(id)initWithAssetStreamHandle:(id)arg0 ;
-(id)initWithData:(id)arg0 error:(*id)arg1 ;
-(id)makeAVPlayerItemWithURL:(id)arg0 ;
-(id)makeAVPlayerItemWithURL:(id)arg0 options:(id)arg1 ;


@end


#endif