// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYSETUPPAYLOAD_H
#define HMACCESSORYSETUPPAYLOAD_H


#import <Foundation/Foundation.h>

#import "HMSetupAccessoryPayload.h"
#import "HMAccessoryOwnershipToken.h"

@interface HMAccessorySetupPayload : NSObject

@property (readonly) HMSetupAccessoryPayload *internalSetupPayload; // ivar: _internalSetupPayload
@property (readonly, copy) HMAccessoryOwnershipToken *ownershipToken; // ivar: _ownershipToken


-(id)initWithURL:(id)arg0 ;
-(id)initWithURL:(id)arg0 ownershipToken:(id)arg1 ;


@end


#endif