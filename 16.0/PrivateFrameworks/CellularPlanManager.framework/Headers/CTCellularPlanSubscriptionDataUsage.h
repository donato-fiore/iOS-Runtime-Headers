// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CTCELLULARPLANSUBSCRIPTIONDATAUSAGE_H
#define CTCELLULARPLANSUBSCRIPTIONDATAUSAGE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCellularPlanSubscriptionDataUsage : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) CGFloat dataCapacity; // ivar: _dataCapacity
@property (readonly, nonatomic) NSString *dataCategory; // ivar: _dataCategory
@property (readonly, nonatomic) CGFloat dataUsed; // ivar: _dataUsed


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCategory:(id)arg0 andDataUsed:(CGFloat)arg1 andDataCapacity:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif