// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTOREPAGESPLITSDESCRIPTION_H
#define SKUISTOREPAGESPLITSDESCRIPTION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "SKUIStorePageSplit.h"

@interface SKUIStorePageSplitsDescription : NSObject <NSCopying>



@property (copy, nonatomic) SKUIStorePageSplit *bottomSplit; // ivar: _bottomSplit
@property (readonly, nonatomic) SKUIStorePageSplit *firstSplit;
@property (copy, nonatomic) SKUIStorePageSplit *leftSplit; // ivar: _leftSplit
@property (readonly, nonatomic) NSInteger numberOfSplits;
@property (copy, nonatomic) SKUIStorePageSplit *rightSplit; // ivar: _rightSplit
@property (copy, nonatomic) SKUIStorePageSplit *topSplit; // ivar: _topSplit


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)enumerateSplitsUsingBlock:(id)arg0 ;
-(void)sizeSplitsToFitWidth:(CGFloat)arg0 usingBlock:(id)arg1 ;


@end


#endif