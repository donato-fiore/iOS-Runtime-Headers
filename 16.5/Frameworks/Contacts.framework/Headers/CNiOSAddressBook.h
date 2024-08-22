// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNIOSADDRESSBOOK_H
#define CNIOSADDRESSBOOK_H

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface CNiOSAddressBook : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) BOOL addressBookIsShared; // ivar: _addressBookIsShared
@property (readonly, nonatomic) NSMutableSet *addressBookPool; // ivar: _addressBookPool
@property (readonly, copy, nonatomic) id *addressBookProvider; // ivar: _addressBookProvider
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource; // ivar: _memoryMonitoringSource


+(*void)newAddressBookWithDelegateInfo:(id)arg0 ;
+(*void)newAddressBookWithURL:(id)arg0 ;
+(*void)newInMemoryAddressBook;
+(void)initialize;
-(*void)popAddressBook;
-(*void)preparedAddressBook:(*void)arg0 ;
-(id)init;
-(id)initWithAddressBookProvider:(id)arg0 ;
-(id)initWithContactsEnvironment:(id)arg0 ;
-(id)performAsynchronousWorkWithInvalidatedAddressBook:(id)arg0 ;
-(id)performSynchronousWorkWithInvalidatedAddressBook:(id)arg0 ;
-(id)resultWithInvalidatedAddressBook:(id)arg0 ;
-(void)flushPool;
-(void)pushAddressBook:(*void)arg0 ;


@end


#endif