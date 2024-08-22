// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITBASEADJUSTMENTCELL_H
#define PUPHOTOEDITBASEADJUSTMENTCELL_H

@class UICollectionViewCell, NSString;
@protocol UIPointerInteractionDelegate;


#import "PUPhotoEditAdjustmentControl.h"

@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell <UIPointerInteractionDelegate>



@property (retain, nonatomic) PUPhotoEditAdjustmentControl *containerButton; // ivar: _containerButton
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultValue;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat identityValue;
@property (retain, nonatomic) NSString *imageName; // ivar: _imageName
@property (nonatomic) BOOL isUserModifying; // ivar: _isUserModifying
@property (nonatomic) CGFloat maxValue;
@property (nonatomic) CGFloat minValue;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat value;


-(id)focusEffect;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(void)_setupContainerButton;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)resetToDefault;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif