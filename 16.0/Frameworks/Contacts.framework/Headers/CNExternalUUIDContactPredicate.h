// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNEXTERNALUUIDCONTACTPREDICATE_H
#define CNEXTERNALUUIDCONTACTPREDICATE_H

@class NSArray;


#import "CNPredicate.h"

@interface CNExternalUUIDContactPredicate : CNPredicate

@property (readonly, copy, nonatomic) NSArray *externalUUIDs; // ivar: _externalUUIDs


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithExternalUUIDs:(id)arg0 ;
-(id)shortDebugDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif