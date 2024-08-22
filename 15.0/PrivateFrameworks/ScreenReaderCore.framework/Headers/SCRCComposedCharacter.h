// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCRCCOMPOSEDCHARACTER_H
#define SCRCCOMPOSEDCHARACTER_H


#import <Foundation/Foundation.h>


@interface SCRCComposedCharacter : NSObject {
    NSUInteger _originalRepresentationLength;
    NSUInteger _normalFormDRepresentationLength;
    NSUInteger _normalFormKCRepresentationLength;
    *int _originalRepresentation;
    *int _normalFormDRepresentation;
    *int _normalFormKCRepresentation;
    NSInteger _originalCombinedCharacterLength;
    *__CFString _originalCombinedCharacter;
}




-(BOOL)_formKCContaintsUpperCase;
-(BOOL)containsUpperCase;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToUChar32:(int)arg0 ;
-(NSUInteger)formDLength;
-(NSUInteger)formKCLength;
-(NSUInteger)length;
-(NSUInteger)originalLength;
-(id)_initWithCharacter:(int)arg0 ;
-(id)_initWithComposedCharacter:(struct __CFString *)arg0 ;
-(id)_initWithSimpleCharacter:(int)arg0 ;
-(id)initWithCharacter:(int)arg0 ;
-(id)initWithComposedCharacter:(struct __CFString *)arg0 ;
-(int)charAtIndex:(NSUInteger)arg0 ;
-(int)formDCharAtIndex:(NSUInteger)arg0 ;
-(int)formKCCharAtIndex:(NSUInteger)arg0 ;
-(int)originalFromCharAtIndex:(NSUInteger)arg0 ;
-(struct __CFString *)copyUnicodeDescriptionString;
-(struct __CFString *)originalString;
-(void)_buildFormD;
-(void)_buildFormKC;
-(void)dealloc;


@end


#endif