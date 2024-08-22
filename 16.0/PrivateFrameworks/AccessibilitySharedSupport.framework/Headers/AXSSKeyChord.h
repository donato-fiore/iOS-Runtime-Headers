// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSSKEYCHORD_H
#define AXSSKEYCHORD_H

@class NSNumber, NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AXSSKeyChord : NSObject <NSSecureCoding, NSCopying>

 {
    NSNumber *_cachedIsFunctionKey;
    NSNumber *_cachedContainsModifier;
}


@property (readonly, nonatomic) BOOL containsModifier;
@property (readonly, nonatomic) NSString *displayValue;
@property (readonly, nonatomic) BOOL isArrowKeyChord;
@property (readonly, nonatomic) BOOL isFunctionKeyChord;
@property (readonly, nonatomic) BOOL isNull;
@property (readonly, nonatomic) BOOL isTextInputChord;
@property (readonly, nonatomic) BOOL isTextInputTabChord;
@property (retain, nonatomic) NSArray *keys; // ivar: _keys


+(BOOL)supportsSecureCoding;
+(id)keyChordWithKeys:(id)arg0 ;
+(id)keyChordWithString:(id)arg0 ;
+(id)keyFromKeyCode:(NSUInteger)arg0 unicodeCharacter:(id)arg1 ;
+(id)nullKeyChord;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToKeyChord:(id)arg0 ;
-(NSUInteger)hash;
-(id)_displayValueWithSortedModifiers:(id)arg0 isUSKeyboard:(BOOL)arg1 ;
-(id)_initWithKeys:(id)arg0 ;
-(id)_normalizeKeys:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)displayValueWithStyle:(NSInteger)arg0 ;
-(id)displayValueWithStyle:(NSInteger)arg0 isUSKeyboard:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif