// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIHEROBUTTONVIEW_H
#define SEARCHUIHEROBUTTONVIEW_H

@class UIButton, SFButtonItem;
@protocol SearchUIFeedbackDelegate;


#import "SearchUICardSectionRowModel.h"

@interface SearchUIHeroButtonView : UIButton

@property (retain, nonatomic) SFButtonItem *buttonItem; // ivar: _buttonItem
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (weak, nonatomic) SearchUICardSectionRowModel *rowModel; // ivar: _rowModel


-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)init;
-(struct CGPoint )menuAttachmentPointForConfiguration:(id)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)didMoveToWindow;
-(void)setSFImage:(id)arg0 ;
-(void)setText:(id)arg0 ;
-(void)tlk_updateForAppearance:(id)arg0 ;


@end


#endif