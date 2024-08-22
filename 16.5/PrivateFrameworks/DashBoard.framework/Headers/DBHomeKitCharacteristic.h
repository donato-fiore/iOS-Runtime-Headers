// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBHOMEKITCHARACTERISTIC_H
#define DBHOMEKITCHARACTERISTIC_H

@class HMCharacteristic, NSString, NSError, NSUUID;
@protocol DBHomeKitEntity;

#import <Foundation/Foundation.h>

#import "DBHome.h"
#import "DBHomeKitService.h"

@interface DBHomeKitCharacteristic : NSObject <DBHomeKitEntity>



@property (retain, nonatomic) id *cachedValue; // ivar: _cachedValue
@property (retain, nonatomic) HMCharacteristic *characteristic; // ivar: _characteristic
@property (nonatomic) BOOL current; // ivar: _current
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat distance;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSString *format;
@property (retain, nonatomic) id *formatedValue; // ivar: _formatedValue
@property (readonly, nonatomic) BOOL hasError;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hidden;
@property (readonly, nonatomic) DBHome *home;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL notifies;
@property (readonly, nonatomic) BOOL pendingRead;
@property (retain, nonatomic) id *pendingValue; // ivar: _pendingValue
@property (readonly, nonatomic) BOOL pendingWrite;
@property (readonly, nonatomic) BOOL readable;
@property (readonly, weak, nonatomic) DBHomeKitService *service; // ivar: _service
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger transactionId; // ivar: _transactionId
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) BOOL usable;
@property (retain, nonatomic) id *value; // ivar: _value
@property (nonatomic) os_unfair_lock_s valueLock; // ivar: _valueLock
@property (readonly, nonatomic) BOOL writeable;


+(id)chacteristicWithService:(id)arg0 characteristic:(id)arg1 ;
+(id)registeredCharacteristicClasses;
+(void)load;
+(void)registerCharacteristicClass:(Class)arg0 ;
-(NSUInteger)_locked_State;
-(id)initWithService:(id)arg0 characteristic:(id)arg1 ;
-(void)_didUpdate;
-(void)_readValueCompletionTransactionID:(NSUInteger)arg0 error:(id)arg1 ;
-(void)_updateValue;
-(void)updateValueRequiringRead:(BOOL)arg0 ;


@end


#endif