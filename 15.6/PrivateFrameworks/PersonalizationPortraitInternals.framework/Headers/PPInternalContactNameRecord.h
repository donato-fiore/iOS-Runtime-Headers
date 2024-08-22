// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPINTERNALCONTACTNAMERECORD_H
#define PPINTERNALCONTACTNAMERECORD_H

@class PPContactNameRecord, NSString;


#import "PPPBContactNameRecord.h"

@interface PPInternalContactNameRecord : PPContactNameRecord {
    PPPBContactNameRecord *_pbRecord;
    NSString *_localizedFullName;
}




-(CGFloat)score;
-(id)cityNames;
-(id)clientCopy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstName;
-(id)identifier;
-(id)initWithIdentifier:(id)arg0 score:(CGFloat)arg1 source:(unsigned char)arg2 sourceIdentifier:(id)arg3 changeType:(unsigned char)arg4 firstName:(id)arg5 phoneticFirstName:(id)arg6 middleName:(id)arg7 phoneticMiddleName:(id)arg8 lastName:(id)arg9 phoneticLastName:(id)arg10 organizationName:(id)arg11 jobTitle:(id)arg12 nickname:(id)arg13 relatedNames:(id)arg14 streetNames:(id)arg15 cityNames:(id)arg16 ;
-(id)initWithPBContactNameRecord:(id)arg0 ;
-(id)jobTitle;
-(id)lastName;
-(id)localizedFullName;
-(id)middleName;
-(id)nickname;
-(id)organizationName;
-(id)pbRecord;
-(id)phoneticFirstName;
-(id)phoneticLastName;
-(id)phoneticMiddleName;
-(id)relatedNames;
-(id)sourceIdentifier;
-(id)streetNames;
-(unsigned char)changeType;
-(unsigned char)source;
-(void)setScore:(CGFloat)arg0 ;


@end


#endif