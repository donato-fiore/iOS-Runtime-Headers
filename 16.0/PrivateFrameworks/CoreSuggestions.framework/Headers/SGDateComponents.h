// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGDATECOMPONENTS_H
#define SGDATECOMPONENTS_H

@class NSDateComponents;


#import "SGLabeledObject.h"

@interface SGDateComponents : SGLabeledObject

@property (readonly, nonatomic) NSDateComponents *dateComponents; // ivar: _dateComponents


+(BOOL)supportsSecureCoding;
+(id)dateComponents:(id)arg0 label:(id)arg1 extractionInfo:(id)arg2 withRecordId:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDateComponents:(id)arg0 ;
-(NSUInteger)hash;
-(id)dateString;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateComponents:(id)arg0 label:(id)arg1 extractionInfo:(id)arg2 recordId:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif