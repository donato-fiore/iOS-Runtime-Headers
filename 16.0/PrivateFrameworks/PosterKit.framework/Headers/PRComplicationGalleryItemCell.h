// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRCOMPLICATIONGALLERYITEMCELL_H
#define PRCOMPLICATIONGALLERYITEMCELL_H

@class UICollectionViewCell, UIImageView, UILabel, MTMaterialView, NSString, UIImage, CHUISWidgetHostViewController;
@protocol UIDragInteractionDelegate, PRComplicationGalleryItemCellDelegate;



@interface PRComplicationGalleryItemCell : UICollectionViewCell <UIDragInteractionDelegate>

 {
    UIImageView *_iconImageView;
    UILabel *_label;
    MTMaterialView *_widgetBackgroundView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRComplicationGalleryItemCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *iconImage;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) CHUISWidgetHostViewController *widgetHostViewController; // ivar: _widgetHostViewController


-(BOOL)_descendantsShouldHighlight;
-(id)dragInteraction:(id)arg0 itemsForBeginningSession:(id)arg1 ;
-(id)dragInteraction:(id)arg0 previewForLiftingItem:(id)arg1 session:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_addDragInteraction;
-(void)dragInteraction:(id)arg0 session:(id)arg1 didEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;


@end


#endif