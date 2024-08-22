// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOEDITADJUSTMENTCELL_H
#define PUPHOTOEDITADJUSTMENTCELL_H

@protocol PUPhotoEditBaseAdjustmentCellDelegate;


#import "PUPhotoEditBaseAdjustmentCell.h"

@interface PUPhotoEditAdjustmentCell : PUPhotoEditBaseAdjustmentCell

@property (weak, nonatomic) NSObject<PUPhotoEditBaseAdjustmentCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL displayMappedValue;
@property (nonatomic) BOOL shouldDisplayValueLabel; // ivar: _shouldDisplayValueLabel


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupEventHandler;
-(void)_updateValueLabelVisibility;
-(void)handleButton:(id)arg0 ;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setImageName:(id)arg0 ;
-(void)setIsUserModifying:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif