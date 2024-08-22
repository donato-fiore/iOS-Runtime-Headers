// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIMPORTCHANGEDETAILSCOLLECTIONVIEWHELPER_H
#define PUIMPORTCHANGEDETAILSCOLLECTIONVIEWHELPER_H

@class UICollectionView;

#import <Foundation/Foundation.h>


@interface PUImportChangeDetailsCollectionViewHelper : NSObject

@property (weak, nonatomic) UICollectionView *collectionView; // ivar: _collectionView


-(id)initWithCollectionView:(id)arg0 ;
-(void)applyChangeDetails:(id)arg0 completionBlock:(id)arg1 ;
-(void)transitionFromDataSource:(id)arg0 toDataSource:(id)arg1 changeHistory:(id)arg2 animated:(BOOL)arg3 completionHandler:(id)arg4 ;


@end


#endif