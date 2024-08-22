// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DBSDEVICEAPPEARANCETABLEVIEWCELL_H
#define DBSDEVICEAPPEARANCETABLEVIEWCELL_H

@class UITableViewCell, UILayoutGuide, NSString;
@protocol DBSDeviceAppearanceOptionViewDelegate, DBSDeviceAppearanceTableViewCellDelegate;


#import "DBSDeviceAppearanceOptionView.h"

@interface DBSDeviceAppearanceTableViewCell : UITableViewCell <DBSDeviceAppearanceOptionViewDelegate>



@property (retain, nonatomic) DBSDeviceAppearanceOptionView *_darkOptionView; // ivar: __darkOptionView
@property (retain, nonatomic) UILayoutGuide *_leadingGuide; // ivar: __leadingGuide
@property (retain, nonatomic) DBSDeviceAppearanceOptionView *_lightOptionView; // ivar: __lightOptionView
@property (retain, nonatomic) UILayoutGuide *_middleGuide; // ivar: __middleGuide
@property (retain, nonatomic) UILayoutGuide *_trailingGuide; // ivar: __trailingGuide
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DBSDeviceAppearanceTableViewCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)cellStyle;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_configureView;
-(void)userDidTapOnAppearanceOptionView:(id)arg0 ;


@end


#endif