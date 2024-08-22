// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPHONENUMBER_H
#define WFPHONENUMBER_H

@class NSString;
@protocol WFNaming, NSCopying, WFSerializableContent;

#import <Foundation/Foundation.h>


@interface WFPhoneNumber : NSObject <WFNaming, NSCopying, WFSerializableContent>



@property (readonly, nonatomic) NSString *contactName; // ivar: _contactName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *formattedPhoneNumber;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, nonatomic) NSString *normalizedPhoneNumber;
@property (readonly, nonatomic) NSString *string; // ivar: _string
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *wfName;


+(BOOL)stringContainsPhoneNumbers:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)objectWithWFSerializedRepresentation:(id)arg0 ;
+(id)phoneNumberWithPhoneNumberString:(id)arg0 ;
+(id)phoneNumberWithPhoneNumberString:(id)arg0 contactName:(id)arg1 label:(id)arg2 ;
+(id)phoneNumberWithTextCheckingResult:(id)arg0 ;
+(id)phoneNumbersInString:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhoneNumberString:(id)arg0 contactName:(id)arg1 label:(id)arg2 ;
-(id)wfSerializedRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif