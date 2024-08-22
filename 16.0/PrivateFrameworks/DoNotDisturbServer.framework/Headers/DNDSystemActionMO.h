// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DNDSYSTEMACTIONMO_H
#define DNDSYSTEMACTIONMO_H

@class NSData;


#import "DNDPerModeSettingsMO.h"

@interface DNDSystemActionMO : DNDPerModeSettingsMO

@property (retain, nonatomic) NSData *encodedAction;
@property (retain, nonatomic) NSData *encodedReverseAction;


+(id)fetchRequest;
-(Class)dnd_settingsType;


@end


#endif