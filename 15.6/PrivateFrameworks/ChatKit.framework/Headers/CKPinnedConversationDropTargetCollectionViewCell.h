// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKPINNEDCONVERSATIONDROPTARGETCOLLECTIONVIEWCELL_H
#define CKPINNEDCONVERSATIONDROPTARGETCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel;


#import "CKDropZoneCircleView.h"
#import "CKPinnedConversationView.h"

@interface CKPinnedConversationDropTargetCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) CKDropZoneCircleView *dropZoneCircleView; // ivar: _dropZoneCircleView
@property (retain, nonatomic) UILabel *instructionLabel; // ivar: _instructionLabel
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (retain, nonatomic) CKPinnedConversationView *prototypeConversationView; // ivar: _prototypeConversationView
@property (nonatomic) BOOL shouldAnimateCircle; // ivar: _shouldAnimateCircle
@property (nonatomic) BOOL shouldHideLabel; // ivar: _shouldHideLabel


+(id)reuseIdentifier;
+(id)uniqueIdentifier;
+(id)uniqueIdentifierForDropTargetAtItemIndex:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateFont;
-(void)_updateInstructionLabelColor;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif