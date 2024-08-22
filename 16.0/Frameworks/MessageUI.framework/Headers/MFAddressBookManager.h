// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFADDRESSBOOKMANAGER_H
#define MFADDRESSBOOKMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface MFAddressBookManager : NSObject {
    *void _addressBook;
    os_unfair_lock_s _lock;
    NSHashTable *_clients;
}




+(BOOL)isAuthorizedToUseAddressBook;
+(id)sharedManager;
-(*void)addressBook;
-(id)_clientsArray;
-(id)init;
-(void)_handleAddressBookChangeNotification;
-(void)_handleAddressBookPrefsChangeNotification;
-(void)addClient:(id)arg0 ;
-(void)dealloc;
-(void)removeClient:(id)arg0 ;


@end


#endif