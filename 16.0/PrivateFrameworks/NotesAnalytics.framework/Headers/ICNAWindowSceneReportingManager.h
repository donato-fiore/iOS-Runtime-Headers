// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNAWINDOWSCENEREPORTINGMANAGER_H
#define ICNAWINDOWSCENEREPORTINGMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ICNAWindowSceneReportingManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventReporters; // ivar: _eventReporters
@property (readonly, nonatomic) BOOL hasActiveWindowScenes;


+(id)sharedManager;
-(id)init;
-(void)windowSceneDidEnd:(id)arg0 ;
-(void)windowSceneMayBeResized:(id)arg0 ;
-(void)windowSceneWillBegin:(id)arg0 ;


@end


#endif