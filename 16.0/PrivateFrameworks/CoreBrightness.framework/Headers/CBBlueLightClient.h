// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CBBLUELIGHTCLIENT_H
#define CBBLUELIGHTCLIENT_H


#import <Foundation/Foundation.h>

#import "BrightnessSystemClient.h"

@interface CBBlueLightClient : NSObject {
    BrightnessSystemClient *bsc;
    id *clientBlock;
    BOOL ownsClient;
    BOOL notificationActive;
    BOOL rangeSet;
    ? defaultCctRange;
    BOOL rangeOverridden;
    ? cctRange;
}


@property BOOL supported; // ivar: _supported


+(BOOL)supportsBlueLightReduction;
-(BOOL)getBlueLightStatus:(struct ? *)arg0 ;
-(BOOL)getCCT:(*float)arg0 ;
-(BOOL)getCCTRange:(struct ? *)arg0 ;
-(BOOL)getDefaultCCTRange:(struct ? *)arg0 ;
-(BOOL)getStrength:(*float)arg0 ;
-(BOOL)getWarningCCT:(*float)arg0 ;
-(BOOL)getWarningStrength:(*float)arg0 ;
-(BOOL)parseStatusDictionary:(id)arg0 intoStruct:(struct ? *)arg1 ;
-(BOOL)setActive:(BOOL)arg0 ;
-(BOOL)setCCT:(float)arg0 commit:(BOOL)arg1 ;
-(BOOL)setCCT:(float)arg0 withPeriod:(float)arg1 commit:(BOOL)arg2 ;
-(BOOL)setCCTRange:(struct ? *)arg0 ;
-(BOOL)setEnabled:(BOOL)arg0 ;
-(BOOL)setEnabled:(BOOL)arg0 withOption:(int)arg1 ;
-(BOOL)setMode:(int)arg0 ;
-(BOOL)setSchedule:(struct ? *)arg0 ;
-(BOOL)setStrength:(float)arg0 commit:(BOOL)arg1 ;
-(BOOL)setStrength:(float)arg0 withPeriod:(float)arg1 commit:(BOOL)arg2 ;
-(id)init;
-(id)initWithClientObj:(id)arg0 ;
-(void)dealloc;
-(void)disableNotifications;
-(void)enableNotifications;
-(void)setStatusNotificationBlock:(id)arg0 ;
-(void)suspendNotifications:(BOOL)arg0 ;
-(void)suspendNotifications:(BOOL)arg0 force:(BOOL)arg1 ;


@end


#endif