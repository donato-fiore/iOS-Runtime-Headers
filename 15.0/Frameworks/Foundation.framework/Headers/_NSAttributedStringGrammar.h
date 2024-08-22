// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSATTRIBUTEDSTRINGGRAMMAR_H
#define _NSATTRIBUTEDSTRINGGRAMMAR_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface _NSAttributedStringGrammar : NSObject <NSCopying, NSMutableCopying>



@property (readonly, getter=_wordAttributes) ? _wordAttributes;
@property NSInteger aspect; // ivar: _aspect
@property NSInteger deictic; // ivar: _deictic
@property NSInteger determinationType; // ivar: _determinationType
@property NSInteger gender; // ivar: _gender
@property NSInteger grammaticalCase; // ivar: _grammaticalCase
@property NSInteger mood; // ivar: _mood
@property NSInteger number; // ivar: _number
@property NSInteger person; // ivar: _person
@property NSInteger position; // ivar: _position
@property NSInteger tense; // ivar: _tense
@property NSInteger verbForm; // ivar: _verbForm


+(id)identityGrammar;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithMarkdownDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithMorphology:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif