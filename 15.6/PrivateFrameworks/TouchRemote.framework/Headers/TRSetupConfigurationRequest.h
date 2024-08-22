// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRSETUPCONFIGURATIONREQUEST_H
#define TRSETUPCONFIGURATIONREQUEST_H

@class NSString;


#import "TRRequestMessage.h"

@interface TRSetupConfigurationRequest : TRRequestMessage

@property (copy, nonatomic) NSString *deviceName; // ivar: _deviceName


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif