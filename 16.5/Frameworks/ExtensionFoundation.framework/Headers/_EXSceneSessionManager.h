// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _EXSCENESESSIONMANAGER_H
#define _EXSCENESESSIONMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _EXSceneSessionManager : NSObject

@property (readonly) NSMutableDictionary *_sessions; // ivar: __sessions


+(id)sharedInstance;
-(id)_init;
-(id)sessionForIdentifier:(id)arg0 ;
-(id)sessions;
-(void)addSession:(id)arg0 ;
-(void)removeSessionForIdentifier:(id)arg0 ;


@end


#endif