// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNAUTOSHORTCUT_H
#define LNAUTOSHORTCUT_H

@class NSString, NSArray, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface LNAutoShortcut : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly, copy, nonatomic) NSString *localizedActionDescription; // ivar: _localizedActionDescription
@property (readonly, copy, nonatomic) NSString *localizedAutoShortcutDescription; // ivar: _localizedAutoShortcutDescription
@property (readonly, copy, nonatomic) NSArray *localizedPhrases;
@property (readonly, copy, nonatomic) NSDictionary *localizedPhrasesByBasePhraseTemplate;
@property (readonly, copy, nonatomic) NSString *localizedShortTitle; // ivar: _localizedShortTitle
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, copy, nonatomic) NSArray *orderedPhrases; // ivar: _orderedPhrases
@property (readonly, nonatomic) NSInteger shortcutTileColor; // ivar: _shortcutTileColor
@property (readonly, copy, nonatomic) NSString *systemImage;
@property (readonly, copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 actionIdentifier:(id)arg1 localizedPhrases:(id)arg2 localizedTitle:(id)arg3 localizedShortTitle:(id)arg4 localizedAutoShortcutDescription:(id)arg5 systemImageName:(id)arg6 ;
-(id)initWithBundleIdentifier:(id)arg0 localeIdentifier:(id)arg1 actionIdentifier:(id)arg2 orderedPhrases:(id)arg3 localizedShortTitle:(id)arg4 localizedAutoShortcutDescription:(id)arg5 systemImageName:(id)arg6 ;
-(id)initWithBundleIdentifier:(id)arg0 localeIdentifier:(id)arg1 actionIdentifier:(id)arg2 orderedPhrases:(id)arg3 localizedShortTitle:(id)arg4 localizedAutoShortcutDescription:(id)arg5 systemImageName:(id)arg6 shortcutTileColor:(NSInteger)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocaleIdentifier:(id)arg0 localizedApplicationName:(id)arg1 basePhraseTemplateSubstitutions:(id)arg2 actionIdentifier:(id)arg3 phraseTemplates:(id)arg4 title:(id)arg5 shortTitle:(id)arg6 actionDescription:(id)arg7 systemImage:(id)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif