// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PCSCKKSITEMMODIFYCONTEXT_H
#define PCSCKKSITEMMODIFYCONTEXT_H

@class NSData, NSString, NSDate;
@protocol OS_os_transaction;

#import <Foundation/Foundation.h>

#import "PCSLockAssertion.h"
#import "PCSMTT.h"

@interface PCSCKKSItemModifyContext : NSObject {
    *__CFDictionary _rollAttributes;
}


@property (retain) id *activityAssertion; // ivar: _activityAssertion
@property *_PCSIdentityData currentIdentity; // ivar: _currentIdentity
@property (retain) NSData *currentItemReference; // ivar: _currentItemReference
@property (retain) NSString *dsid; // ivar: _dsid
@property (retain) NSData *existingItemReference; // ivar: _existingItemReference
@property (retain) NSData *existingItemSHA1; // ivar: _existingItemSHA1
@property (retain) PCSLockAssertion *lockAssertion; // ivar: _lockAssertion
@property *__PCSLogContext log; // ivar: _log
@property (readonly) PCSMTT *mtt; // ivar: _mtt
@property int retryLeftCount; // ivar: _retryLeftCount
@property BOOL returnedExistingIdentity; // ivar: _returnedExistingIdentity
@property BOOL roll; // ivar: _roll
@property *_PCSIdentityData rollIdentity; // ivar: _rollIdentity
@property (retain) NSData *rollItemReference; // ivar: _rollItemReference
@property (retain) NSData *rollItemSHA1; // ivar: _rollItemSHA1
@property (retain) NSDate *server_NextRollDate; // ivar: _server_NextRollDate
@property (retain) NSString *service; // ivar: _service
@property *_PCSIdentitySetData set; // ivar: _set
@property BOOL sync; // ivar: _sync
@property NSInteger timeoutValue; // ivar: _timeoutValue
@property (retain) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(id)init;
-(void)dealloc;


@end


#endif