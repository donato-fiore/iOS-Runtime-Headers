// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMACCESSCODEREMOVEREQUEST_H
#define HMACCESSCODEREMOVEREQUEST_H

@class NSString;
@protocol HMAccessCodeModificationRequest;

#import <Foundation/Foundation.h>

#import "HMAccessoryAccessCode.h"

@interface HMAccessCodeRemoveRequest : NSObject <HMAccessCodeModificationRequest>



@property (readonly) HMAccessoryAccessCode *accessoryAccessCode; // ivar: _accessoryAccessCode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)createAccessCodeRemoveRequestValue;
-(id)initWithAccessoryAccessCode:(id)arg0 ;


@end


#endif