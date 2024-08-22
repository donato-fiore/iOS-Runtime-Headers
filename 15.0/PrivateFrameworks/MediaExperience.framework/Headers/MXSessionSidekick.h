// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MXSESSIONSIDEKICK_H
#define MXSESSIONSIDEKICK_H

@class NSString;

#import <Foundation/Foundation.h>

#import "MXCoreSessionSidekick.h"

@interface MXSessionSidekick : NSObject {
    MXCoreSessionSidekick *mCoreSession;
    NSUInteger mCoreSessionID;
    NSString *mDescription;
    int mClientType;
    BOOL mIsPlaying;
    NSUInteger mID;
}




+(int)updateIsPlaying:(id)arg0 ;
-(BOOL)getIsPlaying;
-(NSUInteger)getCoreSessionID;
-(NSUInteger)getID;
-(id)getClientTypeAsString;
-(id)getCoreSession;
-(id)info;
-(id)initWithSession:(id)arg0 ;
-(int)activate;
-(int)copyPropertyForKey:(id)arg0 valueOut:(*id)arg1 ;
-(int)deactivate:(BOOL)arg0 postInterruptionNotification:(BOOL)arg1 ;
-(int)getClientType;
-(int)setClientType:(int)arg0 ;
-(int)setID:(NSUInteger)arg0 ;
-(int)setIsPlaying:(BOOL)arg0 ;
-(int)setPropertyForKey:(id)arg0 value:(id)arg1 ;
-(void)dealloc;
-(void)dumpInfo;


@end


#endif