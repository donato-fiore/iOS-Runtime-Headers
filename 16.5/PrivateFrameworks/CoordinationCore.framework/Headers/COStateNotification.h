// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COSTATENOTIFICATION_H
#define COSTATENOTIFICATION_H

@class NSDictionary;


#import "COMeshNotification.h"

@interface COStateNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSDictionary *state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithState:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif