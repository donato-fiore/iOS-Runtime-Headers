// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _DPBLACKLISTSERVERSTORAGE_H
#define _DPBLACKLISTSERVERSTORAGE_H

@class NSDate, NSString;
@protocol _DPMaintenance, OS_xpc_object;

#import <Foundation/Foundation.h>


@interface _DPBlacklistServerStorage : NSObject <_DPMaintenance>



@property (weak, nonatomic) NSObject<OS_xpc_object> *activity; // ivar: _activity
@property (retain, nonatomic) NSDate *lastUpdateDate;
@property (retain, nonatomic) NSString *storePath; // ivar: _storePath


-(BOOL)prepareRuntimeBlacklistFolder:(*id)arg0 ;
-(BOOL)requestLatestBlacklistsSynchronously:(*id)arg0 error:(*id)arg1 lastRecordModifiedAt:(*id)arg2 ;
-(BOOL)updateRuntimeBlacklistsFromServer;
-(id)_blacklistURLByKeyFrom:(id)arg0 ;
-(id)_predicateForFetchQuery;
-(id)_publicDatabaseForBlacklists;
-(id)_queryOperationFromCursor:(id)arg0 ;
-(id)init;
-(id)initWithCustomStorePath:(id)arg0 ;
-(id)saveBlacklistsToRuntimeFolder:(id)arg0 ;
-(void)_attributeQueryOperation:(id)arg0 ;
-(void)_executeQueryOperation:(id)arg0 onOperationQueue:(id)arg1 onCompletion:(id)arg2 ;
-(void)_requestLatestBlacklists:(id)arg0 ;
-(void)scheduleMaintenanceWithName:(id)arg0 database:(id)arg1 ;


@end


#endif