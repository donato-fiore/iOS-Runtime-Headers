// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IKDATAPROPERTY_H
#define IKDATAPROPERTY_H

@class NSString;


#import "IKDataAccessor.h"

@interface IKDataProperty : IKDataAccessor

@property (readonly, nonatomic) NSString *property; // ivar: _property


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProperty:(id)arg0 ;


@end


#endif