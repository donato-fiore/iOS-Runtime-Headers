// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKADDRESSEDITORTABLEVIEWCELL_H
#define PKADDRESSEDITORTABLEVIEWCELL_H

@class UITableViewCell, UIStackView;



@interface PKAddressEditorTableViewCell : UITableViewCell

@property (readonly, nonatomic) UIStackView *stackView; // ivar: _stackView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;


@end


#endif