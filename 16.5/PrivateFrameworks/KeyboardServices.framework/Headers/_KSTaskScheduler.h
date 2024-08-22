// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _KSTASKSCHEDULER_H
#define _KSTASKSCHEDULER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface _KSTaskScheduler : NSObject

@property (retain, nonatomic) NSMutableDictionary *allTasks; // ivar: _allTasks


+(id)sharedInstance;
-(id)init;
-(void)registerTask:(id)arg0 ;
-(void)unregisterTask:(id)arg0 ;


@end


#endif