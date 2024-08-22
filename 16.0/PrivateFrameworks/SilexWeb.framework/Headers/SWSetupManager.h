// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWSETUPMANAGER_H
#define SWSETUPMANAGER_H

@class NSString, NSMutableOrderedSet;
@protocol SWSetupManager, SWLogger;

#import <Foundation/Foundation.h>


@interface SWSetupManager : NSObject <SWSetupManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<SWLogger> *logger; // ivar: _logger
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMutableOrderedSet *tasks; // ivar: _tasks


-(id)initWithLogger:(id)arg0 ;
-(void)addTask:(id)arg0 ;
-(void)performTasks;


@end


#endif