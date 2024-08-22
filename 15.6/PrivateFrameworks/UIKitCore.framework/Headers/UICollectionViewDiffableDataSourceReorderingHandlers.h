// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UICOLLECTIONVIEWDIFFABLEDATASOURCEREORDERINGHANDLERS_H
#define UICOLLECTIONVIEWDIFFABLEDATASOURCEREORDERINGHANDLERS_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UICollectionViewDiffableDataSourceReorderingHandlers : NSObject <NSCopying>



@property (copy, nonatomic) id *canReorderItemHandler; // ivar: _canReorderItemHandler
@property (copy, nonatomic) id *didReorderHandler; // ivar: _didReorderHandler
@property (copy, nonatomic) id *willReorderHandler; // ivar: _willReorderHandler


-(id)copyWithZone:(struct _NSZone *)arg0 ;
// -(id)initWithCanReorderItemHandler:(id)arg0 willReorderItemHandler:(unk)arg1 didReorderItemHandler:(id)arg2  ;


@end


#endif