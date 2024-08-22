// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MCSYNTHETICINPUT_H
#define MCSYNTHETICINPUT_H

@class NSString, NSArray;


#import "MCKeyboardInput.h"

@interface MCSyntheticInput : MCKeyboardInput

@property (readonly, nonatomic) NSString *committedText; // ivar: _committedText
@property (readonly, nonatomic) NSUInteger cursorIndex; // ivar: _cursorIndex
@property (nonatomic) BOOL includeSuffixAsSearchString; // ivar: _includeSuffixAsSearchString
@property (readonly, nonatomic) NSArray *syllables; // ivar: _syllables
@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic) NSString *uncommittedText;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)externalSuffix;
-(id)init;
-(id)initWithCommittedText:(id)arg0 syllables:(id)arg1 ;
-(id)syntheticInputWithCommittedText:(id)arg0 syllables:(id)arg1 ;
-(id)syntheticInputWithCursorIndex:(NSUInteger)arg0 ;
-(int)syllableIndex:(*int)arg0 ;


@end


#endif