// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPHOTOPICKERCOLLECTIONVIEWCELL_H
#define CNPHOTOPICKERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel, UIView, NSUUID, CAShapeLayer;



@interface CNPhotoPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *captionLabel; // ivar: _captionLabel
@property (nonatomic) NSUInteger cellStyle; // ivar: _cellStyle
@property (retain, nonatomic) UIView *containerContentView; // ivar: _containerContentView
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (nonatomic) BOOL displaySelection; // ivar: _displaySelection
@property (retain, nonatomic) NSUUID *displaySessionUUID; // ivar: _displaySessionUUID
@property (nonatomic) BOOL displaysBorder; // ivar: _displaysBorder
@property (retain, nonatomic) CAShapeLayer *selectionLayer; // ivar: _selectionLayer


+(CGFloat)cornerRadiusForBounds:(struct CGRect )arg0 forCellStyle:(NSUInteger)arg1 ;
+(id)cellIdentifier;
+(struct CGPath *)selectionPathInBounds:(struct CGRect )arg0 forCellStyle:(NSUInteger)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)clearContainerViewAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateBorderTintColor:(id)arg0 ;
-(void)updateCaptionFrame;
-(void)updateWithCaption:(id)arg0 ;
-(void)updateWithView:(id)arg0 animation:(NSUInteger)arg1 ;


@end


#endif