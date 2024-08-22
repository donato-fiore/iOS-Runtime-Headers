// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSUIDEVICEPASSCODESTATE_H
#define PSUIDEVICEPASSCODESTATE_H


#import <Foundation/Foundation.h>


@interface PSUIDevicePasscodeState : NSObject



+(id)sharedInstance;
-(BOOL)isPasscodeSet;
-(id)getLogger;
-(id)init;
-(id)initPrivate;


@end


#endif