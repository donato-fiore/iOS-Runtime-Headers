// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSCODEUPDATEREQUEST_H
#define HMACCESSCODEUPDATEREQUEST_H

@class NSString;
@protocol HMAccessCodeModificationRequest;

#import <Foundation/Foundation.h>

#import "HMAccessoryAccessCode.h"
#import "HMAccessCodeValue.h"

@interface HMAccessCodeUpdateRequest : NSObject <HMAccessCodeModificationRequest>



@property (readonly, copy) HMAccessoryAccessCode *accessoryAccessCode; // ivar: _accessoryAccessCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy) HMAccessCodeValue *updatedAccessCodeValue; // ivar: _updatedAccessCodeValue


-(id)createAccessCodeUpdateRequestValue;
-(id)initWithAccessoryAccessCode:(id)arg0 updatedAccessCodeValue:(id)arg1 ;


@end


#endif