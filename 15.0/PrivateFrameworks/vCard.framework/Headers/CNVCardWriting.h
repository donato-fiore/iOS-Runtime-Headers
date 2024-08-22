// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNVCARDWRITING_H
#define CNVCARDWRITING_H


#import <Foundation/Foundation.h>


@interface CNVCardWriting : NSObject



+(id)blacklistFieldsForPerson:(id)arg0 options:(id)arg1 ;
+(id)blacklistedMeCardFields;
+(id)dataWithPeople:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)dataWithPerson:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)scopeForPerson:(id)arg0 options:(id)arg1 ;
+(id)stringWithPeople:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(id)stringWithPerson:(id)arg0 options:(id)arg1 error:(*id)arg2 ;
+(void)makevCardWithBuilder:(id)arg0 serializer:(id)arg1 options:(id)arg2 ;
+(void)serializePerson:(id)arg0 withSerializer:(id)arg1 options:(id)arg2 ;


@end


#endif