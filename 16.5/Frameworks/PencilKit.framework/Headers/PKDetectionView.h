// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDETECTIONVIEW_H
#define PKDETECTIONVIEW_H

@class UIView, NSString, UIContextMenuInteraction;
@protocol UIContextMenuInteractionDelegate_ForWebKitOnly;


#import "PKDetectionItem.h"

@interface PKDetectionView : UIView <UIContextMenuInteractionDelegate_ForWebKitOnly>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGRect drawingBounds;
@property (nonatomic) CGAffineTransform drawingTransform; // ivar: _drawingTransform
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKDetectionItem *item;
@property (retain, nonatomic) UIContextMenuInteraction *menuInteraction; // ivar: _menuInteraction
@property (readonly) Class superclass;


-(BOOL)hitTest:(struct CGPoint )arg0 ;
-(CGFloat)_underlineThickness;
-(NSUInteger)accessibilityTraits;
-(id)_contextMenuInteraction:(id)arg0 overrideSuggestedActionsForConfiguration:(id)arg1 ;
-(id)_underlineColor;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)init;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)tapHandler:(id)arg0 ;


@end


#endif