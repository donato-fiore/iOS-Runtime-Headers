// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCAPPLEBACKLIGHTBRTCONTROL_H
#define BCAPPLEBACKLIGHTBRTCONTROL_H



#import "BCBrtControl.h"

@interface BCAppleBacklightBrtControl : BCBrtControl {
    unsigned int _backlightService;
    CGFloat _minUser;
    CGFloat _maxUser;
    CGFloat _minMilliAmps;
    CGFloat _maxMilliAmps;
    CGFloat _maxNitsEDR;
    BOOL _isDFR;
    BOOL _isDCP;
    BOOL _override;
    BOOL _energySaving;
    NSUInteger _thermalMitigation;
    *? _terminationCallback;
    *IONotificationPort _terminationNotifPort;
    unsigned int _terminationIterator;
}


@property (readonly) NSUInteger registryID;


+(id)copyAvailableControls;
// +(id)newMonitorWithHandler:(id)arg0 error:(unk)arg1  ;
-(BOOL)setNits:(CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)setProperty:(id)arg0 value:(id)arg1 error:(*id)arg2 ;
-(CGFloat)getNitsWithError:(*id)arg0 ;
-(id)ID;
-(id)copyModuleIdentifier;
-(id)copyProperty:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithService:(unsigned int)arg0 ;
-(void)dealloc;
-(void)setDisplayService:(unsigned int)arg0 ;


@end


#endif