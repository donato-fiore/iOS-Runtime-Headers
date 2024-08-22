// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CXCALLDIRECTORYLABELEDPHONENUMBERENTRYDATA_H
#define CXCALLDIRECTORYLABELEDPHONENUMBERENTRYDATA_H

@class NSString, NSData;
@protocol CXCallDirectoryEntryData, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CXCallDirectoryLabeledPhoneNumberEntryData : NSObject <CXCallDirectoryEntryData, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSData *labelData; // ivar: _labelData
@property (retain, nonatomic) NSData *phoneNumberData; // ivar: _phoneNumberData
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(NSInteger)phoneNumberAtIndex:(NSUInteger)arg0 ;
-(char *)utf8LabelAtIndex:(NSUInteger)arg0 length:(*unsigned short)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif