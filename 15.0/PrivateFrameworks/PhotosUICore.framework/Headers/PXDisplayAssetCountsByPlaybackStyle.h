// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXDISPLAYASSETCOUNTSBYPLAYBACKSTYLE_H
#define PXDISPLAYASSETCOUNTSBYPLAYBACKSTYLE_H

@class NSMutableDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXDisplayAssetCountsByPlaybackStyle : NSObject <NSCopying>

 {
    NSMutableDictionary *_countsByPlaybackStyle;
}


@property (readonly, nonatomic) NSInteger totalCount;


-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)countForPlaybackStyle:(NSInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAssetFetchResult:(id)arg0 ;
-(id)initWithCountsByPlaybackStyle:(id)arg0 ;
-(void)addPlaybackStyle:(NSInteger)arg0 ;
-(void)enumerateCountsUsingBlock:(id)arg0 ;
-(void)setCount:(NSInteger)arg0 forPlaybackStyle:(NSInteger)arg1 ;


@end


#endif