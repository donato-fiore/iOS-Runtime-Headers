// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ININTENTRESPONSECODABLECODE_H
#define ININTENTRESPONSECODABLECODE_H

@class NSString, NSArray;
@protocol NSSecureCoding, INCodableCoding;

#import <Foundation/Foundation.h>

#import "INIntentResponseCodableDescription.h"

@interface INIntentResponseCodableCode : NSObject <NSSecureCoding, INCodableCoding>



@property (weak, nonatomic, setter=_setCodableDescription:) INIntentResponseCodableDescription *_codableDescription; // ivar: __codableDescription
@property (copy, nonatomic) NSString *conciseFormatString; // ivar: _conciseFormatString
@property (copy, nonatomic) NSString *conciseFormatStringLocID; // ivar: _conciseFormatStringLocID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *formatString; // ivar: _formatString
@property (copy, nonatomic) NSString *formatStringLocID; // ivar: _formatStringLocID
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *parameterNames;
@property (nonatomic, getter=isSuccess) BOOL success; // ivar: _success
@property (readonly) Class superclass;
@property (nonatomic) NSInteger value; // ivar: _value


+(BOOL)supportsSecureCoding;
-(id)__INCodableDescriptionConciseFormatStringDictionaryKey;
-(id)__INCodableDescriptionConciseFormatStringDictionaryLanguageCodeKey;
-(id)__INCodableDescriptionConciseFormatStringIDKey;
-(id)__INCodableDescriptionConciseFormatStringKey;
-(id)__INCodableDescriptionConciseFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringDictionaryKey;
-(id)__INCodableDescriptionFormatStringDictionaryLanguageCodeKey;
-(id)__INCodableDescriptionFormatStringIDKey;
-(id)__INCodableDescriptionFormatStringKey;
-(id)__INCodableDescriptionFormatStringLanguageCodeKey;
-(id)__INCodableDescriptionNameKey;
-(id)__INCodableDescriptionSuccessKey;
-(id)_parameterNamesFromString:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)dictionaryRepresentationWithLocalizer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithDictionary:(id)arg0 ;


@end


#endif