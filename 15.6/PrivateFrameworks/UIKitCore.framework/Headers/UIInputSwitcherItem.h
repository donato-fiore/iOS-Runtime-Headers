// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIINPUTSWITCHERITEM_H
#define UIINPUTSWITCHERITEM_H

@class NSString, NSArray, UIFont;

#import <Foundation/Foundation.h>

#import "UISwitch.h"

@interface UIInputSwitcherItem : NSObject

@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isSegmentedItem;
@property (copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (copy, nonatomic) id *persistentSelectedIndex; // ivar: _persistentSelectedIndex
@property (retain, nonatomic) NSArray *segmentImages; // ivar: _segmentImages
@property (retain, nonatomic) NSArray *segmentTitles; // ivar: _segmentTitles
@property (nonatomic) NSInteger selectedSegmentIndex; // ivar: _selectedSegmentIndex
@property (retain, nonatomic) UIFont *subtitleFont; // ivar: _subtitleFont
@property (retain, nonatomic) UISwitch *switchControl; // ivar: _switchControl
@property (copy, nonatomic) id *switchIsOnBlock; // ivar: _switchIsOnBlock
@property (copy, nonatomic) id *switchToggleBlock; // ivar: _switchToggleBlock
@property (retain, nonatomic) UIFont *titleFont; // ivar: _titleFont
@property (nonatomic) BOOL usesDeviceLanguage; // ivar: _usesDeviceLanguage


+(id)switcherItemWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif