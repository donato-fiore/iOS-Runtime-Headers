// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AMSUIPASSWORDSETTINGSFREEDOWNLOADSCELL_H
#define AMSUIPASSWORDSETTINGSFREEDOWNLOADSCELL_H

@class UITableViewCell, UISwitch;
@protocol AMSUIPasswordSettingsFreeDownloadsCellDelegate;



@interface AMSUIPasswordSettingsFreeDownloadsCell : UITableViewCell

@property (nonatomic) NSObject<AMSUIPasswordSettingsFreeDownloadsCellDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UISwitch *toggle; // ivar: _toggle


-(NSInteger)selectionStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_setup;
-(void)_toggleChanged:(id)arg0 ;


@end


#endif