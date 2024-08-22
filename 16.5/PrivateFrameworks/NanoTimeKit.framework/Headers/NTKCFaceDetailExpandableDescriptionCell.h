// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCFACEDETAILEXPANDABLEDESCRIPTIONCELL_H
#define NTKCFACEDETAILEXPANDABLEDESCRIPTIONCELL_H

@class UIButton;
@protocol NTKCFaceDetailExpandableDescriptionCellDelegate;


#import "NTKCFaceDetailDescriptionCell.h"

@interface NTKCFaceDetailExpandableDescriptionCell : NTKCFaceDetailDescriptionCell

@property (weak, nonatomic) NSObject<NTKCFaceDetailExpandableDescriptionCellDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL expanded; // ivar: _expanded
@property (nonatomic) CGFloat laidOutWidth; // ivar: _laidOutWidth
@property (retain, nonatomic) UIButton *moreButton; // ivar: _moreButton
@property (nonatomic) BOOL shouldLayoutText; // ivar: _shouldLayoutText


+(id)reuseIdentifier;
-(id)init;
-(void)_fontSizeDidChange;
-(void)_moreTapped;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setAttributedText:(id)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif