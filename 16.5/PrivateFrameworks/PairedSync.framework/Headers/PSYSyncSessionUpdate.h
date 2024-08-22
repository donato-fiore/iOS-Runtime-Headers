// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSYSYNCSESSIONUPDATE_H
#define PSYSYNCSESSIONUPDATE_H


#import <Foundation/Foundation.h>

#import "PSYSyncSession.h"

@interface PSYSyncSessionUpdate : NSObject

@property (readonly, nonatomic) PSYSyncSession *originalSession; // ivar: _originalSession
@property (readonly, nonatomic) PSYSyncSession *updatedSession; // ivar: _updatedSession


-(BOOL)didUpdateCompleteSyncSession;
-(id)initWithOriginalSession:(id)arg0 updatedSession:(id)arg1 ;
-(void)enumerateChangedActivitiesWithBlock:(id)arg0 ;
-(void)enumerateNewlyCompletedActivitiesWithBlock:(id)arg0 ;
-(void)enumerateNewlyRunningActivitiesWithBlock:(id)arg0 ;


@end


#endif