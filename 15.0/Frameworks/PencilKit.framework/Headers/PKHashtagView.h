// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKHASHTAGVIEW_H
#define PKHASHTAGVIEW_H

@class UIView;
@protocol PKHashtagViewDelegate;


#import "PKDetectionView.h"
#import "PKHashtagItem.h"

@interface PKHashtagView : PKDetectionView

@property (retain, nonatomic) UIView *blankPreviewView; // ivar: _blankPreviewView
@property (weak, nonatomic) NSObject<PKHashtagViewDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) PKHashtagItem *hashtagItem; // ivar: _hashtagItem


-(CGFloat)_underlineThickness;
-(id)_underlineColor;
-(id)accessibilityIdentifier;
-(id)accessibilityValue;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithHashtagItem:(id)arg0 inDrawing:(id)arg1 ;
-(id)item;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)updateActivationState;


@end


#endif