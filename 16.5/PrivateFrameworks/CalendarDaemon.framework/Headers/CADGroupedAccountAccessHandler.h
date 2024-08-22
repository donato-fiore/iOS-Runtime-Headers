// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CADGROUPEDACCOUNTACCESSHANDLER_H
#define CADGROUPEDACCOUNTACCESSHANDLER_H

@class NSMutableArray;


#import "CADAccountAccessHandler.h"

@interface CADGroupedAccountAccessHandler : CADAccountAccessHandler {
    os_unfair_lock_s _lock;
    NSMutableArray *_restrictedCalendarReadCache;
}


@property (readonly, nonatomic) NSMutableArray *accessHandlers; // ivar: _accessHandlers


-(?)gatherRestrictedCalendarRowIDs:(?)arg0 forActioninDatabase;
-(?)isActionAllowed:(?)arg0 forStoreinDatabase;
-(id)initWithDatabaseDataProvider:(id)arg0 ;
-(id)restrictedCalendarRowIDsForAction:(NSUInteger)arg0 inDatabase:(struct CalDatabase *)arg1 ;
-(void)addAccountAccessHandler:(id)arg0 ;
-(void)reset;


@end


#endif