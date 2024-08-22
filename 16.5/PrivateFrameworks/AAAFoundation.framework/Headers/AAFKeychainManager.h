// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAFKEYCHAINMANAGER_H
#define AAFKEYCHAINMANAGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AAFKeychainManager : NSObject {
    NSObject<OS_dispatch_queue> *_keychainQueue;
}




-(BOOL)_unsafe_deleteKeychainItemWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(BOOL)_unsafe_updateKeychainItemWithDescriptor:(id)arg0 newItem:(id)arg1 error:(*id)arg2 ;
-(id)_unsafe_fetchKeychainItemWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)_unsafe_fetchKeychainItemsWithDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)keychainItemForDescriptor:(id)arg0 error:(*id)arg1 ;
-(id)keychainItemsForDescriptor:(id)arg0 error:(*id)arg1 ;
-(void)_unsafe_addKeychainItem:(id)arg0 shouldAttemptUpdate:(BOOL)arg1 error:(*id)arg2 ;
-(void)addKeychainItem:(id)arg0 error:(*id)arg1 ;
-(void)addOrUpdateKeychainItem:(id)arg0 error:(*id)arg1 ;
-(void)deleteKeychainItemsForDescriptor:(id)arg0 error:(*id)arg1 ;
-(void)updateKeychainItem:(id)arg0 error:(*id)arg1 ;


@end


#endif