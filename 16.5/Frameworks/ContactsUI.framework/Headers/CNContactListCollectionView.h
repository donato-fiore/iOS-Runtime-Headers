// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTLISTCOLLECTIONVIEW_H
#define CNCONTACTLISTCOLLECTIONVIEW_H

@class UICollectionView;
@protocol CNContactListCollectionViewDelegate, CNContactListCountViewDelegate;


#import "CNContactListCountFooterView.h"

@interface CNContactListCollectionView : UICollectionView

@property (nonatomic) NSInteger contactCount; // ivar: _contactCount
@property (retain, nonatomic) CNContactListCountFooterView *contactCountView; // ivar: _contactCountView
@property (weak, nonatomic) NSObject<CNContactListCollectionViewDelegate> *contactListCollectionViewDelegate; // ivar: _contactListCollectionViewDelegate
@property (weak, nonatomic) NSObject<CNContactListCountViewDelegate> *countViewDelegate; // ivar: _countViewDelegate
@property (nonatomic) NSInteger duplicateCount; // ivar: _duplicateCount
@property (nonatomic) NSInteger selectedCount; // ivar: _selectedCount


-(NSUInteger)globalIndexForItemAtIndexPath:(id)arg0 ;
-(id)init;
-(void)deselectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 ;
-(void)selectItemAtIndexPath:(id)arg0 animated:(BOOL)arg1 scrollPosition:(NSUInteger)arg2 ;
-(void)updateSelectedContactCount;


@end


#endif