// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMUTABLEACTIVITYALERT_H
#define CNMUTABLEACTIVITYALERT_H

@class NSString, NSDictionary;


#import "CNActivityAlert.h"

@interface CNMutableActivityAlert : CNActivityAlert

@property (nonatomic) BOOL ignoreMute;
@property (copy, nonatomic) NSString *sound;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (copy, nonatomic) NSString *vibration;


-(id)freeze;


@end


#endif