// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C2METRICOPERATIONGROUPOPTIONS_H
#define C2METRICOPERATIONGROUPOPTIONS_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface C2MetricOperationGroupOptions : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *operationGroupId; // ivar: _operationGroupId
@property (copy, nonatomic) NSString *operationGroupName; // ivar: _operationGroupName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif