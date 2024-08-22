// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ILCALLCLASSIFICATIONREQUEST_H
#define ILCALLCLASSIFICATIONREQUEST_H

@class NSArray;
@protocol NSSecureCoding;


#import "ILClassificationRequest.h"

@interface ILCallClassificationRequest : ILClassificationRequest <NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *callCommunications; // ivar: _callCommunications


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRequest:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithCallCommunications:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif