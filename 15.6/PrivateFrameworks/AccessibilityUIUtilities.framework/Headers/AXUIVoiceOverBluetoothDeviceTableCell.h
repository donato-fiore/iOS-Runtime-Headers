// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXUIVOICEOVERBLUETOOTHDEVICETABLECELL_H
#define AXUIVOICEOVERBLUETOOTHDEVICETABLECELL_H

@class PSTableCell, UIActivityIndicatorView;



@interface AXUIVoiceOverBluetoothDeviceTableCell : PSTableCell {
    UIActivityIndicatorView *_spinner;
    int _state;
}




+(id)checkedImage;
+(id)selectedCheckedImage;
+(id)spacerImage;
+(id)textForBTPairedState:(int)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)_updateCheckMarkIcon;
-(void)dealloc;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setChecked:(BOOL)arg0 ;
-(void)setDeviceState:(int)arg0 ;
-(void)setDeviceStatePaired:(BOOL)arg0 andConnected:(BOOL)arg1 ;


@end


#endif