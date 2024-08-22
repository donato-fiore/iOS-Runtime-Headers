// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYNETWORKPROTECTIONGROUPRECORD_H
#define HMDACCESSORYNETWORKPROTECTIONGROUPRECORD_H


#import <Foundation/Foundation.h>

#import "HMDAccessoryNetworkProtectionGroup.h"

@interface HMDAccessoryNetworkProtectionGroupRecord : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (readonly) HMDAccessoryNetworkProtectionGroup *group; // ivar: _group
@property (nonatomic, getter=isPersisted) BOOL persisted; // ivar: _persisted


+(id)recordWithGroup:(id)arg0 active:(BOOL)arg1 persisted:(BOOL)arg2 ;
-(id)initWithGroup:(id)arg0 active:(BOOL)arg1 persisted:(BOOL)arg2 ;


@end


#endif