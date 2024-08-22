// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKMENTIONVIEW_H
#define PKMENTIONVIEW_H

@class UIView, UIColor, NSArray;
@protocol PKMentionViewDelegate;


#import "PKDetectionView.h"
#import "PKMentionItem.h"

@interface PKMentionView : PKDetectionView

@property (retain, nonatomic) UIView *blankPreviewView; // ivar: _blankPreviewView
@property (weak, nonatomic) NSObject<PKMentionViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIColor *mentionColor; // ivar: _mentionColor
@property (readonly, nonatomic) PKMentionItem *mentionItem; // ivar: _mentionItem
@property (copy, nonatomic) NSArray *possibleParticipants; // ivar: _possibleParticipants


-(CGFloat)_underlineThickness;
-(id)_underlineColor;
-(id)accessibilityIdentifier;
-(id)accessibilityValue;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithMentionItem:(id)arg0 possibleParticipants:(id)arg1 inDrawing:(id)arg2 ;
-(id)item;
-(void)contextMenuInteraction:(id)arg0 willEndForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)updateActivationState;


@end


#endif