// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HKSAMPLEITERATORQUERYSERVERCONFIGURATION_H
#define _HKSAMPLEITERATORQUERYSERVERCONFIGURATION_H



#import "HKQueryServerConfiguration.h"
#import "HKSampleIteratorQueryCursor.h"

@interface _HKSampleIteratorQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) NSUInteger limit; // ivar: _limit
@property (copy, nonatomic) HKSampleIteratorQueryCursor *queryCursor; // ivar: _queryCursor


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif