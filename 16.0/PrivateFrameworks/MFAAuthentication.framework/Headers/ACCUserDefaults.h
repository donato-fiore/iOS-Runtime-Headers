// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACCUSERDEFAULTS_H
#define ACCUSERDEFAULTS_H

@class NSUserDefaults;



@interface ACCUserDefaults : NSUserDefaults



+(id)sharedDefaults;
+(id)sharedDefaultsIapd;
+(id)sharedDefaultsLogging;
-(id)init;


@end


#endif