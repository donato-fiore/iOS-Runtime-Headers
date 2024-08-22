// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSPROGRESSWITHREMOTEPARENT_H
#define _NSPROGRESSWITHREMOTEPARENT_H



#import "NSProgress.h"
#import "NSXPCConnection.h"

@interface _NSProgressWithRemoteParent : NSProgress

@property (retain) NSXPCConnection *parentConnection; // ivar: _parentConnection
@property NSUInteger sequence; // ivar: _sequence


-(void)_setUserInfoValue:(id)arg0 forKey:(id)arg1 fromChild:(BOOL)arg2 ;
-(void)_updateFractionCompleted:(struct _NSProgressFractionTuple )arg0 ;
-(void)dealloc;


@end


#endif