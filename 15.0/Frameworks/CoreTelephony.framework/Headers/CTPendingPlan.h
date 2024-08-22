// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CTPENDINGPLAN_H
#define CTPENDINGPLAN_H

@class NSString;


#import "CTPlan.h"

@interface CTPendingPlan : CTPlan

@property (readonly, nonatomic) NSString *matchingID; // ivar: _matchingID
@property (readonly, nonatomic) NSString *smdpURL; // ivar: _smdpURL


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSmdpURL:(id)arg0 matchingID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif