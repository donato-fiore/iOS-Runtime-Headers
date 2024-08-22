// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDOCUMENTPICKERMANAGEMENTVIEWCONTROLLERCELL_H
#define _UIDOCUMENTPICKERMANAGEMENTVIEWCONTROLLERCELL_H

@class UITableViewCell, UIImageView;



@interface _UIDocumentPickerManagementViewControllerCell : UITableViewCell

@property (retain, nonatomic) UIImageView *newlyAddedView; // ivar: _newlyAddedView
@property (nonatomic) BOOL showNewlyAdded;


-(id)_dotImage;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif