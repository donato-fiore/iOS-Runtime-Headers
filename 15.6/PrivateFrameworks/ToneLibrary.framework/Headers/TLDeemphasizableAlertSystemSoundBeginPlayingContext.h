// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TLDEEMPHASIZABLEALERTSYSTEMSOUNDBEGINPLAYINGCONTEXT_H
#define TLDEEMPHASIZABLEALERTSYSTEMSOUNDBEGINPLAYINGCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "TLAlert.h"
#import "TLAlertSystemSoundContext.h"
#import "TLSystemSound.h"

@interface TLDeemphasizableAlertSystemSoundBeginPlayingContext : NSObject

@property (retain, nonatomic) TLAlert *alert; // ivar: _alert
@property (retain, nonatomic) TLAlertSystemSoundContext *alertSystemSoundContext; // ivar: _alertSystemSoundContext
@property (retain, nonatomic) TLSystemSound *sound; // ivar: _sound
@property (copy, nonatomic) NSString *toneIdentifierForDeemphasizingAlert; // ivar: _toneIdentifierForDeemphasizingAlert




@end


#endif