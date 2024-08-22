// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKSAMPLECOUNTQUERYSERVERCONFIGURATION_H
#define _HKSAMPLECOUNTQUERYSERVERCONFIGURATION_H

@class NSArray;
@protocol NSSecureCoding;


#import "HKQueryServerConfiguration.h"

@interface _HKSampleCountQueryServerConfiguration : HKQueryServerConfiguration <NSSecureCoding>



@property (copy, nonatomic) NSArray *queryDescriptors; // ivar: _queryDescriptors


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif