// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECEMAILADDRESSPARSER_H
#define ECEMAILADDRESSPARSER_H


#import <Foundation/Foundation.h>


@interface ECEmailAddressParser : NSObject



+(BOOL)_validateString:(id)arg0 withFunction:(*unk)arg1 ;
+(BOOL)parseEmailAddressString:(id)arg0 displayName:(*id)arg1 localPart:(*id)arg2 domain:(*id)arg3 groupList:(*id)arg4 ;
+(BOOL)parseString:(id)arg0 emailAddressList:(*id)arg1 ;
+(BOOL)validateDisplayName:(id)arg0 ;
+(BOOL)validateDomain:(id)arg0 ;
+(BOOL)validateLocalPart:(id)arg0 ;


@end


#endif