// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFCHOOSEFROMLISTDIALOGCELL_H
#define WFCHOOSEFROMLISTDIALOGCELL_H

@class UITableViewCell, NSString, MTVisualStylingProvider, NSCache, WFDialogListItem, TLKSimpleRowView;
@protocol UIPointerInteractionDelegate;



@interface WFChooseFromListDialogCell : UITableViewCell <UIPointerInteractionDelegate>



@property (nonatomic, getter=isChecked) BOOL checked; // ivar: _checked
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MTVisualStylingProvider *fillVisualStylingProvider; // ivar: _fillVisualStylingProvider
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSCache *imageCache; // ivar: _imageCache
@property (retain, nonatomic) WFDialogListItem *listItem; // ivar: _listItem
@property (weak, nonatomic) TLKSimpleRowView *rowView; // ivar: _rowView
@property (readonly) Class superclass;


-(NSUInteger)tlkCornerRoundingStyleForWFRoundingStyle:(NSUInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif