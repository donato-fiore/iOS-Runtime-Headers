// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIPREFERENCES_H
#define SIRIUIPREFERENCES_H

@class NSUserDefaults, NSDate;

#import <Foundation/Foundation.h>


@interface SiriUIPreferences : NSObject {
    NSUserDefaults *_userDefaults;
    NSInteger _numberOfTimesSiriCardShown;
    BOOL _voiceRequestMadeWhileInCarDND;
    NSDate *_previousSiriRequestErrorTimestamp;
    NSInteger _siriRequestErrorCount;
}




+(id)sharedPreferences;
-(BOOL)boolForKey:(id)arg0 ;
-(BOOL)voiceRequestMadeWhileInCarDND;
-(NSInteger)integerForKey:(id)arg0 ;
-(NSInteger)numberOfTimesCarDNDSiriCardShown;
-(NSInteger)siriRequestErrorCount;
-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)previousSiriRequestErrorTimestamp;
-(void)setBool:(BOOL)arg0 forKey:(id)arg1 ;
-(void)setInteger:(NSInteger)arg0 forKey:(id)arg1 ;
-(void)setNumberOfTimesCarDNDSiriCardShown:(NSInteger)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;
-(void)setPreviousSiriRequestErrorTimestamp:(id)arg0 ;
-(void)setSiriRequestErrorCount:(NSInteger)arg0 ;
-(void)setVoiceRequestMadeWhileInCarDND:(BOOL)arg0 ;


@end


#endif