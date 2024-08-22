// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWSESSIONMANAGER_H
#define SWSESSIONMANAGER_H

@class NSString;
@protocol SWSessionManager, SWLogger, SWScriptsManager, SWSession;

#import <Foundation/Foundation.h>


@interface SWSessionManager : NSObject <SWSessionManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<SWScriptsManager> *scriptsManager; // ivar: _scriptsManager
@property (readonly, nonatomic) NSObject<SWSession> *session; // ivar: _session
@property (readonly) Class superclass;


-(id)initWithScriptsManager:(id)arg0 logger:(id)arg1 ;
-(void)refresh;


@end


#endif