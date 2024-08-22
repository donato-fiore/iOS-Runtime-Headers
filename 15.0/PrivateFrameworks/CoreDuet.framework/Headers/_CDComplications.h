// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDCOMPLICATIONS_H
#define _CDCOMPLICATIONS_H

@class NSUserDefaults, NSMutableDictionary, NSDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _CDComplications : NSObject {
    NSObject<OS_dispatch_queue> *complicationQueue;
    int deviceChangeToken;
    NSUserDefaults *pushLimits;
    NSMutableDictionary *meterTokens;
}


@property (copy) NSDictionary *activeComplications; // ivar: _activeComplications


+(id)initializeForAdmissionChecking:(BOOL)arg0 ;
+(id)sharedComplication;
-(BOOL)admissionCheckOnComplication:(id)arg0 forRemote:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)isBundleActiveComplication:(id)arg0 ;
-(BOOL)watchIsCharging;
-(id)CDAttributeForComplication:(id)arg0 error:(*id)arg1 ;
-(id)initForComplications;
-(int)remainingPushesOnComplication:(id)arg0 andReduceBy:(id)arg1 ;
-(int)remainingPushesOnComplicationForiOSApplicationWithBundleID:(id)arg0 ;
-(void)meteringStartedOnComplication:(id)arg0 costDictionary:(id)arg1 onDate:(id)arg2 ;
-(void)meteringStoppedOnComplication:(id)arg0 costDictionary:(id)arg1 onDate:(id)arg2 ;
-(void)meteringUpdateOnComplication:(id)arg0 costDictionary:(id)arg1 onDate:(id)arg2 ;
-(void)readOutActiveComplications;


@end


#endif