// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PCSLOCKMANAGER_H
#define PCSLOCKMANAGER_H

@class NSHashTable;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PCSLockManager : NSObject

@property (retain) NSHashTable *holders; // ivar: _holders
@property (retain) NSObject<OS_os_log> *log; // ivar: _log
@property (retain) NSHashTable *observers; // ivar: _observers


+(BOOL)holdAssertion;
+(id)manager;
+(void)dropAssertion;
-(BOOL)holdAssertion:(id)arg0 ;
-(id)initManager;
-(id)lockAssertion:(id)arg0 ;
-(void)_onlockDropAssertion:(id)arg0 ;
-(void)dropAssertion:(id)arg0 ;
-(void)removeAssertion:(id)arg0 ;


@end


#endif