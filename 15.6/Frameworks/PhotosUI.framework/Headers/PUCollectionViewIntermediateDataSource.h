// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUCOLLECTIONVIEWINTERMEDIATEDATASOURCE_H
#define PUCOLLECTIONVIEWINTERMEDIATEDATASOURCE_H

@class NSString;
@protocol UICollectionViewDataSource;

#import <Foundation/Foundation.h>


@interface PUCollectionViewIntermediateDataSource : NSObject <UICollectionViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSObject<UICollectionViewDataSource> *realDataSource; // ivar: _realDataSource
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;


@end


#endif