// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITABBARSETTINGS_H
#define _UITABBARSETTINGS_H

@class PTSettings;



@interface _UITabBarSettings : PTSettings

@property (nonatomic) BOOL highlightSystemItems; // ivar: _highlightSystemItems
@property (nonatomic) BOOL showAlignmentGuides; // ivar: _showAlignmentGuides


+(id)settingsControllerModule;
-(void)setDefaultValues;


@end


#endif