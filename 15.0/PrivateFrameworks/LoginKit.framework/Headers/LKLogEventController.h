// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LKLOGEVENTCONTROLLER_H
#define LKLOGEVENTCONTROLLER_H

@class NSDate, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "LKSwitchOperation.h"

@interface LKLogEventController : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *dynamicdsema; // ivar: _dynamicdsema
@property (retain, nonatomic) NSDate *logEnumarationEndTime; // ivar: _logEnumarationEndTime
@property (copy, nonatomic) id *logEventHandler; // ivar: _logEventHandler
@property (retain, nonatomic) NSMutableDictionary *mutableKeychainItemsAddedByActivityID; // ivar: _mutableKeychainItemsAddedByActivityID
@property (nonatomic) BOOL streamingLogs; // ivar: _streamingLogs
@property (retain, nonatomic) LKSwitchOperation *switchOperation; // ivar: _switchOperation
@property (retain, nonatomic) NSMutableArray *switchOperationsMutableArray; // ivar: _switchOperationsMutableArray


+(id)loginDetailsPredicate;
-(BOOL)_isKeychainLog:(id)arg0 ;
-(BOOL)_needToParseSecurityLogs;
-(id)init;
-(id)loginDetailsWithStartDate:(id)arg0 logArchivePath:(id)arg1 ;
-(void)_handleKeychainItemEventFromLogEvent:(id)arg0 ;
-(void)_parseBuddLog:(id)arg0 ;
-(void)_parseKeychainLog:(id)arg0 ;
-(void)_parseSpringBoardLog:(id)arg0 ;
-(void)_parseUserManagementFrameworkLog:(id)arg0 ;
-(void)enumurateLogEventsSynchronouslyFromDate:(id)arg0 predicate:(id)arg1 logEventHandler:(id)arg2 ;
-(void)enumuratePersistentLogsSynchronouslyFromDate:(id)arg0 logArchivePath:(id)arg1 predicate:(id)arg2 logEventHandler:(id)arg3 ;


@end


#endif