// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCARRIERSIGNUPPLAN_H
#define CTCARRIERSIGNUPPLAN_H

@class NSString;


#import "CTPlan.h"

@interface CTCarrierSignupPlan : CTPlan

@property (readonly, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) NSString *url; // ivar: _url


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUrl:(id)arg0 type:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif