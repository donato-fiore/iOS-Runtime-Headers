// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPCLIENTCONTACTNAMERECORD_H
#define PPCLIENTCONTACTNAMERECORD_H

@class NSString, NSDictionary, NSArray;


#import "PPContactNameRecord.h"

@interface PPClientContactNameRecord : PPContactNameRecord {
    NSString *_identifier;
    CGFloat _score;
    unsigned char _source;
    NSString *_sourceIdentifier;
    unsigned char _changeType;
    NSString *_firstName;
    NSString *_phoneticFirstName;
    NSString *_middleName;
    NSString *_phoneticMiddleName;
    NSString *_lastName;
    NSString *_phoneticLastName;
    NSString *_organizationName;
    NSString *_jobTitle;
    NSString *_nickname;
    NSDictionary *_relatedNames;
    NSArray *_streetNames;
    NSArray *_cityNames;
}




-(CGFloat)score;
-(id)cityNames;
-(id)firstName;
-(id)identifier;
-(id)initWithIdentifier:(id)arg0 score:(CGFloat)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 changeType:(unsigned char)arg4 firstName:(id)arg5 phoneticFirstName:(id)arg6 middleName:(id)arg7 phoneticMiddleName:(id)arg8 lastName:(id)arg9 phoneticLastName:(id)arg10 organizationName:(id)arg11 jobTitle:(id)arg12 nickname:(id)arg13 relatedNames:(id)arg14 streetNames:(id)arg15 cityNames:(id)arg16 ;
-(id)jobTitle;
-(id)lastName;
-(id)middleName;
-(id)nickname;
-(id)organizationName;
-(id)phoneticFirstName;
-(id)phoneticLastName;
-(id)phoneticMiddleName;
-(id)relatedNames;
-(id)sourceIdentifier;
-(id)streetNames;
-(unsigned char)changeType;
-(unsigned char)source;


@end


#endif