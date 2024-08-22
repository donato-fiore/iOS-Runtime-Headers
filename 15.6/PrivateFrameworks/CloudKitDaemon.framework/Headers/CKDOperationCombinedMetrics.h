// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDOPERATIONCOMBINEDMETRICS_H
#define CKDOPERATIONCOMBINEDMETRICS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CKDOperationMetrics.h"

@interface CKDOperationCombinedMetrics : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) CKDOperationMetrics *MMCSMetrics; // ivar: _MMCSMetrics
@property (readonly, copy, nonatomic) CKDOperationMetrics *cloudKitMetrics; // ivar: _cloudKitMetrics


+(BOOL)supportsSecureCoding;
-(id)CKPropertiesDescription;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCloudKitMetrics:(id)arg0 andMMCSMetrics:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif