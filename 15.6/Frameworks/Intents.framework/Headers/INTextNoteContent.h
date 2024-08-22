// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INTEXTNOTECONTENT_H
#define INTEXTNOTECONTENT_H

@class NSString;
@protocol NSSecureCoding, NSCopying;


#import "INNoteContent.h"

@interface INTextNoteContent : INNoteContent <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *text; // ivar: _text


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)_intents_readableTitleWithLocalizer:(id)arg0 metadata:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithText:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif