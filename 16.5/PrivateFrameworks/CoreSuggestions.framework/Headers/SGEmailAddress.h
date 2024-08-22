// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGEMAILADDRESS_H
#define SGEMAILADDRESS_H

@class NSString;


#import "SGLabeledObject.h"

@interface SGEmailAddress : SGLabeledObject

@property (readonly, nonatomic) NSString *emailAddress; // ivar: _emailAddress


+(BOOL)supportsSecureCoding;
+(id)emailAddress:(id)arg0 label:(id)arg1 extractionInfo:(id)arg2 withRecordId:(id)arg3 ;
+(id)emailAddress:(id)arg0 label:(id)arg1 extractionType:(NSUInteger)arg2 withRecordId:(id)arg3 ;
+(id)emailAddress:(id)arg0 label:(id)arg1 extractionType:(NSUInteger)arg2 withRecordId:(id)arg3 origin:(id)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEmailAddress:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmailAddress:(id)arg0 label:(id)arg1 extractionInfo:(id)arg2 recordId:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif