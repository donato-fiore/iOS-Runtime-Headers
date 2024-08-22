// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COCAPABILITYUPDATENOTIFICATION_H
#define COCAPABILITYUPDATENOTIFICATION_H

@class NSSet;


#import "COMeshNotification.h"

@interface COCapabilityUpdateNotification : COMeshNotification

@property (readonly, copy, nonatomic) NSSet *capabilities; // ivar: _capabilities


+(BOOL)supportsSecureCoding;
-(id)initWithCapabilities:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif