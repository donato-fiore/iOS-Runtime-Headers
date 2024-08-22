// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBADAPTATIONCLIENT_H
#define CBADAPTATIONCLIENT_H


#import <Foundation/Foundation.h>

#import "BrightnessSystemClient.h"

@interface CBAdaptationClient : NSObject {
    BrightnessSystemClient *bsc;
    BOOL ownsClient;
    int _mode;
    BOOL _modeSet;
}


@property BOOL supported; // ivar: _supported


+(BOOL)supportsAdaptation;
-(BOOL)animateFromWeakestAdaptationModeInArray:(*int)arg0 withLength:(int)arg1 toWeakestInArray:(*int)arg2 withLength:(int)arg3 withProgress:(float)arg4 andPeriod:(float)arg5 ;
-(BOOL)getEnabled;
-(BOOL)getStrengths:(*float)arg0 nStrengths:(int)arg1 ;
-(BOOL)overrideStrengths:(*float)arg0 forModes:(*int)arg1 nModes:(int)arg2 ;
-(BOOL)setAdaptationMode:(int)arg0 withPeriod:(float)arg1 ;
-(BOOL)setEnabled:(BOOL)arg0 ;
-(BOOL)setWeakestAdaptationModeFromArray:(*int)arg0 withLength:(int)arg1 andPeriod:(float)arg2 ;
-(id)init;
-(id)initWithClientObj:(id)arg0 ;
-(int)getAdaptationMode;
-(void)dealloc;


@end


#endif