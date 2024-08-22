// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNCONTACTCLASSIFIEDHANDLESTRINGINTERPRETER_H
#define CNCONTACTCLASSIFIEDHANDLESTRINGINTERPRETER_H

@class CNHandleStringClassification, NSArray, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CNContactClassifiedHandleStringInterpreter : NSObject

@property (readonly, nonatomic) CNHandleStringClassification *classification; // ivar: _classification
@property (readonly) NSArray *emailAddresses;
@property (readonly, nonatomic) NSMutableArray *emailAddressesImpl; // ivar: _emailAddressesImpl
@property (nonatomic) BOOL hasBeenInterpreted; // ivar: _hasBeenInterpreted
@property (readonly) NSArray *phoneNumbers;
@property (readonly, nonatomic) NSMutableArray *phoneNumbersImpl; // ivar: _phoneNumbersImpl
@property (readonly, nonatomic) NSMutableArray *unconvertableHandles; // ivar: _unconvertableHandles


-(id)description;
-(id)init;
-(id)initWithHandleStringClassification:(id)arg0 ;
-(void)interpretEmailAddresses;
-(void)interpretPhoneNumbers;
-(void)interpretUnknownsAsEmailAddresses;
-(void)interpretValues;


@end


#endif