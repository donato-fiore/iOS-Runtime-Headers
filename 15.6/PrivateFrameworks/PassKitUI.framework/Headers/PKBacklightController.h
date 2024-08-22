// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKBACKLIGHTCONTROLLER_H
#define PKBACKLIGHTCONTROLLER_H

@class BrightnessSystemClient, NSHashTable;

#import <Foundation/Foundation.h>


@interface PKBacklightController : NSObject {
    BrightnessSystemClient *_brightnessClient;
    BOOL _foregroundActive;
    NSHashTable *_requesters;
    NSHashTable *_allowers;
    BOOL _isBacklightRamped;
}




+(id)sharedInstance;
-(id)init;
-(void)_changeBacklightMinimumEnabledIfNecessary;
-(void)_updateBacklightNits:(float)arg0 period:(CGFloat)arg1 disableWhitePointShift:(BOOL)arg2 ;
-(void)beginAllowingBacklightRamping:(id)arg0 ;
-(void)beginRequestingBacklightRamping:(id)arg0 ;
-(void)endAllowingBacklightRamping:(id)arg0 ;
-(void)endRequestingBacklightRamping:(id)arg0 ;


@end


#endif