// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef C2METRICOPERATIONOPTIONS_H
#define C2METRICOPERATIONOPTIONS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "C2MetricOperationGroupOptions.h"

@interface C2MetricOperationOptions : NSObject <NSSecureCoding>



@property (copy, nonatomic) C2MetricOperationGroupOptions *operationGroup; // ivar: _operationGroup
@property (copy, nonatomic) NSString *operationId; // ivar: _operationId
@property (copy, nonatomic) NSString *operationType; // ivar: _operationType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif