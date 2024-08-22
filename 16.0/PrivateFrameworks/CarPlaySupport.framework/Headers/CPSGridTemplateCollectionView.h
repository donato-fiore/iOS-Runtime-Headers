// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSGRIDTEMPLATECOLLECTIONVIEW_H
#define CPSGRIDTEMPLATECOLLECTIONVIEW_H

@class UICollectionView, NSString, NSArray;
@protocol UICollectionViewDelegate, UICollectionViewDataSource;



@interface CPSGridTemplateCollectionView : UICollectionView <UICollectionViewDelegate, UICollectionViewDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *gridButtons; // ivar: _gridButtons
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_linearFocusMovementSequences;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 gridButtons:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif