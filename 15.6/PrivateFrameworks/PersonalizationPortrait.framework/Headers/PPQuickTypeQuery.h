// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPQUICKTYPEQUERY_H
#define PPQUICKTYPEQUERY_H

@class NSString, NSArray, NSNumber;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PPQuickTypeQuery : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (nonatomic) unsigned int fields; // ivar: _fields
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (copy, nonatomic) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (nonatomic) unsigned char options; // ivar: _options
@property (retain, nonatomic) NSArray *people; // ivar: _people
@property (retain, nonatomic) NSArray *recipients; // ivar: _recipients
@property (nonatomic) unsigned char semanticTag; // ivar: _semanticTag
@property (retain, nonatomic) NSArray *subFields; // ivar: _subFields
@property (nonatomic) unsigned char subtype; // ivar: _subtype
@property (nonatomic) unsigned char time; // ivar: _time
@property (retain, nonatomic) NSNumber *timeoutSeconds; // ivar: _timeoutSeconds
@property (nonatomic) unsigned char type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)_labelFromLMFieldString:(id)arg0 qualifiers:(id)arg1 ;
+(id)_peopleNamesFromLMQualifiers:(id)arg0 ;
+(id)_subfieldsFromString:(id)arg0 ;
+(id)quickTypeQueryFromLMTokens:(id)arg0 localeIdentifier:(id)arg1 recipients:(id)arg2 bundleIdentifier:(id)arg3 ;
+(id)quickTypeQueryWithType:(unsigned char)arg0 subtype:(unsigned char)arg1 semanticTag:(unsigned char)arg2 fields:(unsigned int)arg3 time:(unsigned char)arg4 options:(unsigned char)arg5 subFields:(id)arg6 label:(id)arg7 people:(id)arg8 localeIdentifier:(id)arg9 bundleIdentifier:(id)arg10 recipients:(id)arg11 ;
+(id)quickTypeQueryWithType:(unsigned char)arg0 subtype:(unsigned char)arg1 semanticTag:(unsigned char)arg2 fields:(unsigned int)arg3 time:(unsigned char)arg4 subFields:(id)arg5 label:(id)arg6 people:(id)arg7 localeIdentifier:(id)arg8 bundleIdentifier:(id)arg9 recipients:(id)arg10 ;
+(unsigned char)_semanticTagFromString:(id)arg0 ;
+(unsigned char)_subtypeFromString:(id)arg0 ;
+(unsigned char)_timeFromString:(id)arg0 ;
+(unsigned char)_typeFromString:(id)arg0 ;
+(unsigned int)_fieldsFromStrings:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToQuickTypeQuery:(id)arg0 ;
-(BOOL)isResultEquivelentToQuickTypeQuery:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(unsigned char)arg0 subtype:(unsigned char)arg1 semanticTag:(unsigned char)arg2 fields:(unsigned int)arg3 time:(unsigned char)arg4 options:(unsigned char)arg5 subFields:(id)arg6 label:(id)arg7 people:(id)arg8 localeIdentifier:(id)arg9 bundleIdentifier:(id)arg10 recipients:(id)arg11 timeoutSeconds:(id)arg12 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif