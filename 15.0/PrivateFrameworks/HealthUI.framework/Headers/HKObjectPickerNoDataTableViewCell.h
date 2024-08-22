// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKOBJECTPICKERNODATATABLEVIEWCELL_H
#define HKOBJECTPICKERNODATATABLEVIEWCELL_H

@class UITableViewCell, NSString, UILabel;



@interface HKObjectPickerNoDataTableViewCell : UITableViewCell

@property (retain, nonatomic) NSString *explanationText;
@property (retain, nonatomic) UILabel *label; // ivar: _label


+(id)defaultReuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setupSubviews;
-(void)prepareForReuse;


@end


#endif