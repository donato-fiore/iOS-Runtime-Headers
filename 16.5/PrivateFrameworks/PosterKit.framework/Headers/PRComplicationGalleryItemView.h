// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRCOMPLICATIONGALLERYITEMVIEW_H
#define PRCOMPLICATIONGALLERYITEMVIEW_H

@class UIView, UIImageView, UILabel, MTMaterialView, NSString, UIImage, CHUISWidgetHostViewController;
@protocol UIDragInteractionDelegate, PRComplicationGalleryItemViewDelegate;



@interface PRComplicationGalleryItemView : UIView <UIDragInteractionDelegate>

 {
    UIImageView *_iconImageView;
    UILabel *_label;
    MTMaterialView *_widgetBackgroundView;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRComplicationGalleryItemViewDelegate> *delegate; // ivar: _delegate
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
-(void)dragInteraction:(id)arg0 session:(id)arg1 willEndWithOperation:(NSUInteger)arg2 ;
-(void)dragInteraction:(id)arg0 sessionWillBegin:(id)arg1 ;


@end


#endif