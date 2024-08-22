// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SALOCALSEARCHPHONENUMBER_H
#define SALOCALSEARCHPHONENUMBER_H

@class NSString;
@protocol SAAceSerializable;


#import "AceObject.h"

@interface SALocalSearchPhoneNumber : AceObject <SAAceSerializable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *value;


+(id)phoneNumber;
+(id)phoneNumberWithDictionary:(id)arg0 context:(id)arg1 ;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif