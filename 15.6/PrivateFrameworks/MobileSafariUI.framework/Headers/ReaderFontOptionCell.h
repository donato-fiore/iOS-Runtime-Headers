// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef READERFONTOPTIONCELL_H
#define READERFONTOPTIONCELL_H

@class UICollectionViewListCell, UIView, NSAttributedString, NSString;
@protocol _SFSettingsAlertOptionsGroupItemConfiguration;



@interface ReaderFontOptionCell : UICollectionViewListCell <_SFSettingsAlertOptionsGroupItemConfiguration>



@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (copy, nonatomic) NSAttributedString *attributedText;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_listContentConfiguration;
-(void)_updateAccessories;
-(void)setSelected:(BOOL)arg0 ;
-(void)updateConfigurationUsingState:(id)arg0 ;


@end


#endif