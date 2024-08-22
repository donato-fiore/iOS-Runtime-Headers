// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGPHONENUMBER_H
#define SGPHONENUMBER_H

@class NSString;


#import "SGLabeledObject.h"

@interface SGPhoneNumber : SGLabeledObject

@property (readonly, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber


+(BOOL)supportsSecureCoding;
+(id)phoneNumber:(id)arg0 label:(id)arg1 extractionInfo:(id)arg2 recordId:(id)arg3 ;
+(id)phoneNumber:(id)arg0 label:(id)arg1 extractionType:(NSUInteger)arg2 recordId:(id)arg3 ;
+(id)phoneNumber:(id)arg0 label:(id)arg1 extractionType:(NSUInteger)arg2 recordId:(id)arg3 origin:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPhoneNumber:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhoneNumber:(id)arg0 label:(id)arg1 extractionInfo:(id)arg2 recordId:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif