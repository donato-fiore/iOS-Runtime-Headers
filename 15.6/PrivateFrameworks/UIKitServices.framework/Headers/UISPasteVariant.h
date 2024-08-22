// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISPASTEVARIANT_H
#define UISPASTEVARIANT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UISPasteVariant : NSObject

@property (readonly, nonatomic) NSString *actionIdentifier; // ivar: _actionIdentifier
@property (readonly, nonatomic) NSString *glyph; // ivar: _glyph
@property (readonly, nonatomic) NSUInteger index; // ivar: _index
@property (readonly, nonatomic) NSString *keyInput; // ivar: _keyInput
@property (readonly, nonatomic) NSInteger keyModifierFlags; // ivar: _keyModifierFlags
@property (readonly, nonatomic) NSString *localizationKey; // ivar: _localizationKey
@property (readonly, nonatomic) SEL selector; // ivar: _selector


+(id)_bundle;
+(id)allVariants;
+(id)variantForActionIdentifier:(id)arg0 ;
+(id)variantForIndex:(NSUInteger)arg0 ;
+(id)variantForSelector:(SEL)arg0 ;
-(id)initWithIndex:(NSUInteger)arg0 selector:(SEL)arg1 actionIdentifier:(id)arg2 localizationKey:(id)arg3 glpyh:(id)arg4 keyInput:(id)arg5 keyModifierFlags:(NSInteger)arg6 ;
-(id)localizedStringForLocalization:(id)arg0 ;


@end


#endif