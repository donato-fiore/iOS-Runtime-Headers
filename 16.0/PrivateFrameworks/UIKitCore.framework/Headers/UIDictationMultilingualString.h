// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDICTATIONMULTILINGUALSTRING_H
#define UIDICTATIONMULTILINGUALSTRING_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface UIDictationMultilingualString : NSObject

@property (retain, nonatomic) id *correctionIdentifier; // ivar: _correctionIdentifier
@property (copy, nonatomic) NSString *dominantLanguage; // ivar: _dominantLanguage
@property (retain, nonatomic) NSString *interactionIdentifier; // ivar: _interactionIdentifier
@property (copy, nonatomic) NSArray *phrases; // ivar: _phrases
@property (copy, nonatomic) NSString *text; // ivar: _text


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryValue;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithText:(id)arg0 forLanguage:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif