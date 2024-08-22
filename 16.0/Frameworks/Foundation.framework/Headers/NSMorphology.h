// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMORPHOLOGY_H
#define NSMORPHOLOGY_H

@class NSMutableDictionary, NSDictionary, NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSMorphology : NSObject <NSCopying, NSSecureCoding>

 {
    NSMutableDictionary *_customPronouns;
}


@property (readonly, getter=_customPronouns) NSDictionary *_customPronouns;
@property (copy, setter=_setCustomPronouns:) NSDictionary *_customPronouns;
@property (readonly, nonatomic) NSData *_externalRepresentation;
@property (readonly, nonatomic) NSDictionary *_externalRepresentationDictionary;
@property (nonatomic) NSInteger grammaticalGender; // ivar: _grammaticalGender
@property (nonatomic) NSInteger number; // ivar: _number
@property (nonatomic) NSInteger partOfSpeech; // ivar: _partOfSpeech
@property (readonly, getter=isUnspecified) BOOL unspecified;


+(BOOL)supportsSecureCoding;
+(id)userMorphology;
+(void)_clearCachedUserMorphology;
+(void)_getUserMorphology:(*id)arg0 userInflection:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setCustomPronoun:(id)arg0 forLanguage:(id)arg1 error:(*id)arg2 ;
-(NSUInteger)hash;
-(id)_initWithExternalRepresentation:(id)arg0 error:(*id)arg1 ;
-(id)_initWithExternalRepresentationDictionary:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)customPronounForLanguage:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInflection:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif