// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BYDEVICEFORTEST_H
#define BYDEVICEFORTEST_H



#import "BYDevice.h"

@interface BYDeviceForTest : BYDevice

@property (readonly, nonatomic) BOOL hasSolidStateHomeButton; // ivar: _hasSolidStateHomeButton
@property (readonly, nonatomic) BOOL supportsTrueTone; // ivar: _supportsTrueTone


-(id)init;


@end


#endif