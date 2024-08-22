// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIDOCUMENTPICKEROVERVIEWVIEWCONTROLLERCELL_H
#define _UIDOCUMENTPICKEROVERVIEWVIEWCONTROLLERCELL_H

@class UITableViewCell, UIImageView;



@interface _UIDocumentPickerOverviewViewControllerCell : UITableViewCell

@property (retain, nonatomic) UIImageView *iconView; // ivar: _iconView
@property (retain, nonatomic) UIImageView *newlyAddedView; // ivar: _newlyAddedView
@property (nonatomic) BOOL showNewlyAdded;


-(id)_dotImage;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif