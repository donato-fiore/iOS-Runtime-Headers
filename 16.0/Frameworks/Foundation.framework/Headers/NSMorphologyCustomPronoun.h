// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMORPHOLOGYCUSTOMPRONOUN_H
#define NSMORPHOLOGYCUSTOMPRONOUN_H

@class NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSMorphologyCustomPronoun : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *_externalRepresentationDictionary;
@property (copy, nonatomic) NSString *objectForm; // ivar: _objectForm
@property (copy, nonatomic) NSString *possessiveAdjectiveForm; // ivar: _possessiveAdjectiveForm
@property (copy, nonatomic) NSString *possessiveForm; // ivar: _possessiveForm
@property (copy, nonatomic) NSString *reflexiveForm; // ivar: _reflexiveForm
@property (copy, nonatomic) NSString *subjectForm; // ivar: _subjectForm


// +(BOOL)_validateCustomPronounWithAccessor:(id)arg0 forLanguage:(unk)arg1 error:(id)arg2  ;
+(BOOL)isSupportedForLanguage:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)requiredKeysForLanguage:(id)arg0 ;
-(BOOL)_autocompleteEnglishPronounFromSubjectForm;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_externalRepresentation;
-(id)_initWithExternalRepresentationDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif