// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SWSCRIPTSSETUPTASK_H
#define SWSCRIPTSSETUPTASK_H

@class NSString;
@protocol SWSetupTask, SWScriptsManager;

#import <Foundation/Foundation.h>


@interface SWScriptsSetupTask : NSObject <SWSetupTask>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<SWScriptsManager> *scriptsManager; // ivar: _scriptsManager
@property (readonly) Class superclass;


-(id)initWithScriptsManager:(id)arg0 ;
-(void)performSetup;


@end


#endif