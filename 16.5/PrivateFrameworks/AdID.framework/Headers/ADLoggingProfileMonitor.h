// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADLOGGINGPROFILEMONITOR_H
#define ADLOGGINGPROFILEMONITOR_H

@class NSSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ADLoggingProfileMonitor : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue; // ivar: _initQueue
@property (retain, nonatomic) NSSet *profileIdentifiers; // ivar: _profileIdentifiers


-(BOOL)_hasRelevantProfileChanged:(id)arg0 ;
-(id)fetchInstalledProfileIdentifiers;
-(id)init;
-(void)_beginMonitoring;
-(void)_fetchInstalledProfilesAndListen;
-(void)_profilesChanged:(id)arg0 ;


@end


#endif