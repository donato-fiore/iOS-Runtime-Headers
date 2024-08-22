// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKTIMETRAVELSETTINGS_H
#define NTKTIMETRAVELSETTINGS_H

@class NPSManager;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKTimeTravelSettings : NSObject {
    NPSManager *_npsManager;
    BOOL _timeTravelEnabled;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}




+(id)sharedInstance;
-(BOOL)_isTimeTravelEnabledInPreferences;
-(BOOL)isTimeTravelEnabled;
-(id)init;
-(void)_handlePrefsChanged;
-(void)dealloc;
-(void)setTimeTravelEnabled:(BOOL)arg0 ;


@end


#endif