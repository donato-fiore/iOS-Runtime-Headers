// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSBASECOLLECTIONCELL_H
#define SSBASECOLLECTIONCELL_H

@class UICollectionViewCell;



@interface SSBaseCollectionCell : UICollectionViewCell

@property (nonatomic) BOOL didCompleteSetup; // ivar: _didCompleteSetup


+(id)cellForCollectionView:(id)arg0 indexPath:(id)arg1 ;
+(id)identifier;
-(void)configureCell;


@end


#endif