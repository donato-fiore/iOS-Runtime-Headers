// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCONCRETEMUTABLEATTRIBUTEDSTRING_H
#define NSCONCRETEMUTABLEATTRIBUTEDSTRING_H



#import "NSMutableAttributedString.h"
#import "NSMutableString.h"
#import "NSMutableRLEArray.h"

@interface NSConcreteMutableAttributedString : NSMutableAttributedString {
    NSMutableString *mutableString;
    NSMutableRLEArray *mutableAttributes;
    ? fields;
}




+(BOOL)supportsSecureCoding;
+(Class)_mutableStringClass;
-(BOOL)_mayRequireIntentResolution;
-(NSUInteger)length;
-(id)_runArrayHoldingAttributes;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange )arg3 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)init;
-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 ;
-(id)string;
-(void)_markIntentsResolved;
-(void)_markRequiringIntentResolution;
-(void)addAttribute:(id)arg0 value:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)dealloc;
-(void)edited:(NSUInteger)arg0 range:(struct _NSRange )arg1 changeInLength:(NSInteger)arg2 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif