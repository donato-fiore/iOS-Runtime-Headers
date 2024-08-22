// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MXSIGNPOSTMETRIC_H
#define MXSIGNPOSTMETRIC_H

@class NSString;


#import "MXMetric.h"
#import "MXSignpostIntervalData.h"

@interface MXSignpostMetric : MXMetric

@property (readonly) NSString *signpostCategory; // ivar: _signpostCategory
@property (readonly) MXSignpostIntervalData *signpostIntervalData; // ivar: _signpostIntervalData
@property (readonly) NSString *signpostName; // ivar: _signpostName
@property (readonly) NSUInteger totalCount; // ivar: _totalCount


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSignpostName:(id)arg0 withSignpostCategory:(id)arg1 withTotalCount:(NSUInteger)arg2 withSignpostIntervalData:(id)arg3 ;
-(id)toDictionary;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif