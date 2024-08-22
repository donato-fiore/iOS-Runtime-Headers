// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSPHONENUMBERCONTEXTINFO_H
#define AMSPHONENUMBERCONTEXTINFO_H

@class NSString, NSUUID;

#import <Foundation/Foundation.h>


@interface AMSPhoneNumberContextInfo : NSObject

@property (readonly) BOOL isVoicePreferred; // ivar: _isVoicePreferred
@property (readonly) NSString *phoneNumber; // ivar: _phoneNumber
@property (readonly) NSString *simLabel; // ivar: _simLabel
@property (readonly) NSUUID *uuid; // ivar: _uuid


-(id)description;
-(id)initWithPhoneNumber:(id)arg0 simLabel:(id)arg1 uuid:(id)arg2 isVoicePreferred:(BOOL)arg3 ;


@end


#endif