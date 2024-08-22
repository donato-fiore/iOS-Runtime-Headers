// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWLOCALDATASTORESETUPTASK_H
#define SWLOCALDATASTORESETUPTASK_H

@class NSString;
@protocol SWSetupTask, SWDatastoreManager, SWScriptsManager;

#import <Foundation/Foundation.h>


@interface SWLocalDatastoreSetupTask : NSObject <SWSetupTask>



@property (readonly, nonatomic) NSObject<SWDatastoreManager> *datastoreManager; // ivar: _datastoreManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSObject<SWScriptsManager> *scriptsManager; // ivar: _scriptsManager
@property (readonly) Class superclass;


-(id)initWithDatastoreManager:(id)arg0 scriptsManager:(id)arg1 ;
-(void)performSetup;


@end


#endif