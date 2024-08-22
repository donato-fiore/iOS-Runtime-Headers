// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOEDITBASEADJUSTMENTCELL_H
#define PUPHOTOEDITBASEADJUSTMENTCELL_H

@class UICollectionViewCell, NSString;


#import "PUPhotoEditAdjustmentControl.h"

@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell

@property (retain, nonatomic) PUPhotoEditAdjustmentControl *containerButton; // ivar: _containerButton
@property (nonatomic) CGFloat defaultValue;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic) CGFloat identityValue;
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (nonatomic) BOOL isUserModifying; // ivar: _isUserModifying
@property (nonatomic) CGFloat maxValue;
@property (nonatomic) CGFloat minValue;
@property (nonatomic) CGFloat value;


-(id)focusEffect;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setupContainerButton;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)resetToDefault;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif