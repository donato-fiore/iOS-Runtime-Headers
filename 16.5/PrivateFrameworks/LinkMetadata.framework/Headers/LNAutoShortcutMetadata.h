// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNAUTOSHORTCUTMETADATA_H
#define LNAUTOSHORTCUTMETADATA_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "LNStaticDeferredLocalizedString.h"

@interface LNAutoShortcutMetadata : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *autoShortcutDescription; // ivar: _autoShortcutDescription
@property (readonly, copy, nonatomic) NSArray *phraseTemplates; // ivar: _phraseTemplates
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *shortTitle; // ivar: _shortTitle
@property (readonly, copy, nonatomic) NSString *systemImageName; // ivar: _systemImageName
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithActionIdentifier:(id)arg0 phraseTemplates:(id)arg1 shortTitle:(id)arg2 autoShortcutDescription:(id)arg3 systemImageName:(id)arg4 ;
-(id)initWithActionIdentifier:(id)arg0 phraseTemplates:(id)arg1 title:(id)arg2 shortTitle:(id)arg3 autoShortcutDescription:(id)arg4 systemImageName:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif