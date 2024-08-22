// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFPHOTOPICKERSECTIONHEADERVIEW_H
#define MFPHOTOPICKERSECTIONHEADERVIEW_H

@class UICollectionReusableView, UIButton, NSString, UILabel;
@protocol MFReusableIdentifiable;



@interface MFPhotoPickerSectionHeaderView : UICollectionReusableView <MFReusableIdentifiable>



@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)reusableIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)addAllPhotosTarget:(id)arg0 action:(SEL)arg1 ;


@end


#endif