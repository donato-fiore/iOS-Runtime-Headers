// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWPERSISTENTDATAMANAGER_H
#define AWPERSISTENTDATAMANAGER_H

@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface AWPersistentDataManager : NSObject {
    *void _shm_obj;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSUInteger _loadAbsTime;
}




+(BOOL)AWPersistentDataExists:(*int)arg0 ;
+(BOOL)truncateAWPersistentData:(*int)arg0 error:(*id)arg1 ;
+(BOOL)validateAWPersistentDataHeader:(struct ? *)arg0 ;
+(id)sharedManager;
+(void)initAWPersistentDataHeader:(struct ? *)arg0 ;
-(BOOL)checkPreconditions:(*id)arg0 ;
-(BOOL)closeWithConnection:(id)arg0 index:(int)arg1 error:(*id)arg2 ;
-(BOOL)isValidIndexForConnection:(id)arg0 index:(int)arg1 error:(*id)arg2 ;
-(id)init;
-(int)nextFreeIndex;
-(int)openWithConnection:(id)arg0 error:(*id)arg1 ;
-(struct ? *)clientStateWithConnection:(id)arg0 index:(int)arg1 error:(*id)arg2 ;
-(void)loadPersistentData;


@end


#endif