// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSCODEADDREQUEST_H
#define HMACCESSCODEADDREQUEST_H

@class NSString;
@protocol HMAccessCodeModificationRequest;

#import <Foundation/Foundation.h>

#import "HMAccessCodeValue.h"
#import "HMAccessory.h"

@interface HMAccessCodeAddRequest : NSObject <HMAccessCodeModificationRequest>



@property (readonly, copy) HMAccessCodeValue *accessCodeValue; // ivar: _accessCodeValue
@property (readonly) HMAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createAccessCodeAddRequestValue;
-(id)initWithAccessCodeValue:(id)arg0 accessory:(id)arg1 ;


@end


#endif