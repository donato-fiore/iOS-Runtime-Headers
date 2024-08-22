// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTSKEYVALUESTORE_H
#define MTSKEYVALUESTORE_H

@class NSString, NSDictionary;
@protocol HMFLogging;

#import <Foundation/Foundation.h>

#import "MTSKeychainStore.h"

@interface MTSKeyValueStore : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) MTSKeychainStore *keychainStore; // ivar: _keychainStore
@property (readonly, copy) NSDictionary *storedValuesByKey;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)removeAllStoredValuesWithError:(*id)arg0 ;
-(BOOL)removeStoredValueForKey:(id)arg0 error:(*id)arg1 ;
-(BOOL)setStoredValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(id)init;
-(id)initWithKeychainStore:(id)arg0 ;
-(id)storedValueForKey:(id)arg0 ;


@end


#endif