// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CXCALLDIRECTORYPHONENUMBERENTRYDATA_H
#define CXCALLDIRECTORYPHONENUMBERENTRYDATA_H

@class NSString, NSData;
@protocol CXCallDirectoryEntryData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CXCallDirectoryPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *phoneNumberData; // ivar: _phoneNumberData
@property (readonly, nonatomic) *NSInteger phoneNumbers;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(NSInteger)phoneNumberAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif