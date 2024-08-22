// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCFACEDETAILKALEIDOSCOPEEDITOPTIONCELL_H
#define NTKCFACEDETAILKALEIDOSCOPEEDITOPTIONCELL_H

@protocol NTKCFaceDetailKaleidoscopeEditOptionCellDelegate;


#import "NTKCFaceDetailEditOptionCell.h"

@interface NTKCFaceDetailKaleidoscopeEditOptionCell : NTKCFaceDetailEditOptionCell

@property (weak, nonatomic) NSObject<NTKCFaceDetailKaleidoscopeEditOptionCellDelegate> *delegate; // ivar: delegate
@property (nonatomic) NSInteger userOptionIndex; // ivar: _userOptionIndex


-(void)_setupFromCollection;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)selectUserOption;


@end


#endif