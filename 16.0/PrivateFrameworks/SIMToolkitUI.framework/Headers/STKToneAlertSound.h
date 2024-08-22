// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STKTONEALERTSOUND_H
#define STKTONEALERTSOUND_H

@class TLAlert, NSString;
@protocol STKSound;


#import "STKBaseSound.h"

@interface STKToneAlertSound : STKBaseSound <STKSound>

 {
    TLAlert *_alert;
    NSInteger _alertType;
    BOOL _finishedSoundNormally;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithType:(NSInteger)arg0 duration:(CGFloat)arg1 ;
-(void)_reallyPlaySound;
-(void)_reallyStopSound;


@end


#endif