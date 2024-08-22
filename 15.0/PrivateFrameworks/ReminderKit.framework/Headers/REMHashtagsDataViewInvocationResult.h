// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMHASHTAGSDATAVIEWINVOCATIONRESULT_H
#define REMHASHTAGSDATAVIEWINVOCATIONRESULT_H

@class NSSet;
@protocol NSSecureCoding;


#import "REMStoreInvocationResult.h"

@interface REMHashtagsDataViewInvocationResult : REMStoreInvocationResult <NSSecureCoding>



@property (readonly, nonatomic) NSSet *hashtags; // ivar: _hashtags


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHashtags:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif