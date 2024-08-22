// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOLLECTIONVIEWENVIRONMENTADAPTER_H
#define _UICOLLECTIONVIEWENVIRONMENTADAPTER_H


#import <Foundation/Foundation.h>

#import "UICollectionView.h"

@interface _UICollectionViewEnvironmentAdapter : NSObject

@property (weak, nonatomic, getter=_collectionView) UICollectionView *collectionView; // ivar: _collectionView


-(id)createEnvironment;
-(id)initWithCollectionView:(id)arg0 ;
-(struct CGSize )contentSize;
-(struct NSDirectionalEdgeInsets )contentInsets;


@end


#endif