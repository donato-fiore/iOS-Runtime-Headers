// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLALERTSYSTEMSOUNDPLAYTASKDESCRIPTOR_H
#define TLALERTSYSTEMSOUNDPLAYTASKDESCRIPTOR_H


#import <Foundation/Foundation.h>

#import "TLAlert.h"
#import "TLAlertSystemSoundContext.h"
#import "TLSystemSound.h"

@interface TLAlertSystemSoundPlayTaskDescriptor : NSObject

@property (readonly, nonatomic) TLAlert *alert; // ivar: _alert
@property (readonly, nonatomic) TLAlertSystemSoundContext *alertSystemSoundContext; // ivar: _alertSystemSoundContext
@property (readonly, nonatomic) TLSystemSound *sound; // ivar: _sound


-(id)initWithAlert:(id)arg0 sound:(id)arg1 alertSystemSoundContext:(id)arg2 ;


@end


#endif