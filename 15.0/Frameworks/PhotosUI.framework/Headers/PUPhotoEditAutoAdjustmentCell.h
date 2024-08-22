// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOEDITAUTOADJUSTMENTCELL_H
#define PUPHOTOEDITAUTOADJUSTMENTCELL_H

@class UITapGestureRecognizer;
@protocol PUPhotoEditBaseAdjustmentCellDelegate;


#import "PUPhotoEditBaseAdjustmentCell.h"

@interface PUPhotoEditAutoAdjustmentCell : PUPhotoEditBaseAdjustmentCell

@property (weak, nonatomic) NSObject<PUPhotoEditBaseAdjustmentCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_configureContainerButton;
-(void)handleButton:(id)arg0 ;
-(void)performPrimaryAction;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setImageName:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif