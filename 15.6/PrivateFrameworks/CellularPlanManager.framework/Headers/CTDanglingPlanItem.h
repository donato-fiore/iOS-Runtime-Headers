// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CTDANGLINGPLANITEM_H
#define CTDANGLINGPLANITEM_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CTUserLabel.h"

@interface CTDanglingPlanItem : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *iccid; // ivar: _iccid
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) NSString *simLabelID; // ivar: _simLabelID
@property (retain, nonatomic) CTUserLabel *userLabel; // ivar: _userLabel


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIccid:(id)arg0 phoneNumber:(id)arg1 label:(id)arg2 labelID:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif