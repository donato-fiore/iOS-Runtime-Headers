// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDACCESSORYBUNDLE_H
#define HMDACCESSORYBUNDLE_H

@class HMFObject;


#import "HMDHAPAccessory.h"

@interface HMDAccessoryBundle : HMFObject

@property (retain, nonatomic) HMDHAPAccessory *accessory; // ivar: accessory
@property (retain, nonatomic) HMFObject *context; // ivar: context


-(id)initWithAccessory:(id)arg0 context:(id)arg1 ;


@end


#endif