// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSQUICKACTIONSBUTTON_H
#define CSQUICKACTIONSBUTTON_H

@class UICoverSheetButton, _UILegibilitySettings;



@interface CSQuickActionsButton : UICoverSheetButton

@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (nonatomic) BOOL permitted; // ivar: _permitted
@property (nonatomic) NSInteger type; // ivar: _type


-(id)_accessoryTitleForType;
-(id)_buttonImageNameForSelected:(BOOL)arg0 ;
-(id)_imageWithName:(id)arg0 ;
-(id)_statisticsIdentifierForType;
-(id)initWithType:(NSInteger)arg0 ;
-(void)_updateStyle;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif