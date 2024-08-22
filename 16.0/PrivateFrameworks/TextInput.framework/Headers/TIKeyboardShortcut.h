// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TIKEYBOARDSHORTCUT_H
#define TIKEYBOARDSHORTCUT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TIKeyboardShortcut : NSObject

@property (retain, nonatomic) NSString *displayStringOverride; // ivar: _displayStringOverride
@property (retain, nonatomic) NSString *keyEquivalent; // ivar: _keyEquivalent
@property NSUInteger modifierFlags; // ivar: _modifierFlags


+(BOOL)isMirroringCandidate:(id)arg0 ;
+(id)findLocalizationForKeyboardShortcut:(id)arg0 withModifiers:(NSUInteger)arg1 inApplicableOverrides:(id)arg2 usingKeyboardType:(unsigned int)arg3 ;
+(id)localizedKeyboardShortcut:(id)arg0 forKeyboardLayout:(id)arg1 ;
+(id)localizedKeyboardShortcut:(id)arg0 forKeyboardLayout:(id)arg1 usingKeyboardType:(unsigned int)arg2 ;
+(id)localizedKeyboardShortcut:(id)arg0 forKeyboardLayout:(id)arg1 withAttributes:(id)arg2 ;
+(id)shortcutWithKeyEquivalent:(id)arg0 modifierFlags:(NSUInteger)arg1 ;
+(id)shortcutWithKeyEquivalent:(id)arg0 modifierFlags:(NSUInteger)arg1 displayStringOverride:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithKeyEquivalent:(id)arg0 modifierFlags:(NSUInteger)arg1 ;
-(id)initWithKeyEquivalent:(id)arg0 modifierFlags:(NSUInteger)arg1 displayStringOverride:(id)arg2 ;


@end


#endif