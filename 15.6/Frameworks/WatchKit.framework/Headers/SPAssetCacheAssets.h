// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPASSETCACHEASSETS_H
#define SPASSETCACHEASSETS_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SPAssetCacheAssets : NSObject

@property (retain, nonatomic) NSMutableArray *assets; // ivar: _assets


+(id)fromProto:(id)arg0 ;
+(id)toProto:(id)arg0 ;
-(id)init;
-(void)addAsset:(id)arg0 ;


@end


#endif