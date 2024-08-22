// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALNPERSISTENTTIMETOLEAVEREFRESHSTORAGE_H
#define CALNPERSISTENTTIMETOLEAVEREFRESHSTORAGE_H

@class NSString;
@protocol CALNTimeToLeaveRefreshStorage, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CALNInMemoryTimeToLeaveRefreshStorage.h"

@interface CALNPersistentTimeToLeaveRefreshStorage : NSObject <CALNTimeToLeaveRefreshStorage>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CALNInMemoryTimeToLeaveRefreshStorage *inMemoryStorage; // ivar: _inMemoryStorage
@property (readonly, copy, nonatomic) NSString *path; // ivar: _path
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)persistentStorageWithPath:(id)arg0 ;
+(id)timeToLeaveRefreshDataFromPersistentStorageWithPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_loadDataWithError:(*id)arg0 ;
-(BOOL)_saveDataWithError:(*id)arg0 ;
-(id)initWithPath:(id)arg0 ;
-(id)refreshDateWithIdentifier:(id)arg0 ;
-(id)refreshDates;
-(void)_addRefreshDate:(id)arg0 withIdentifier:(id)arg1 ;
-(void)_removeData;
-(void)_removeRefreshDateWithIdentifier:(id)arg0 ;
-(void)addRefreshDate:(id)arg0 withIdentifier:(id)arg1 ;
-(void)removeRefreshDateWithIdentifier:(id)arg0 ;
-(void)removeRefreshDates;


@end


#endif