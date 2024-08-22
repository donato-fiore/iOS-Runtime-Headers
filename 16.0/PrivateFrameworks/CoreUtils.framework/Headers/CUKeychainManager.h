// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CUKEYCHAINMANAGER_H
#define CUKEYCHAINMANAGER_H


#import <Foundation/Foundation.h>


@interface CUKeychainManager : NSObject



-(?)addOrUpdateOrReAddItem:(?)arg0 flags:(?)arg1 logCategory:(?)arg2 logLabelerror;
-(?)addOrUpdateOrReAddItem:(?)arg0 logCategory:(?)arg1 logLabelerror;
-(BOOL)addItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)addItem:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)removeItemMatchingItem:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemMatchingItem:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)updateItem:(id)arg0 matchingItem:(id)arg1 error:(*id)arg2 ;
-(BOOL)updateItem:(id)arg0 matchingItem:(id)arg1 flags:(unsigned int)arg2 error:(*id)arg3 ;
-(id)_copyItemsMatchingItem:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)_copyItemsMatchingItemSeparate:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)addItem:(id)arg0 returnFlags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)copyItemMatchingItem:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)copyItemsMatchingItem:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;


@end


#endif