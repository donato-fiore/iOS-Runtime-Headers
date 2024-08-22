// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSGINPUTSUGGESTIONSRESPONSEITEM_H
#define PSGINPUTSUGGESTIONSRESPONSEITEM_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "PSGStructuredInfoSuggestion.h"
#import "PSGTextualResponseSuggestion.h"

@interface PSGInputSuggestionsResponseItem : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) PSGStructuredInfoSuggestion *structuredInfoSuggestion; // ivar: _structuredInfoSuggestion
@property (readonly, nonatomic) PSGTextualResponseSuggestion *textualResponseSuggestion; // ivar: _textualResponseSuggestion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToItem:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTextualResponseSuggestion:(id)arg0 structuredInfoSuggestion:(id)arg1 ;
-(id)predictedValue;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif