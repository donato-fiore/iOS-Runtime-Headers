// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBHOMEKITSERVICE_H
#define DBHOMEKITSERVICE_H

@class NSDictionary, NSString, NSUUID, CARObserverHashTable, HMService;
@protocol HMAccessoryDelegate, DBHomeKitEntity;

#import <Foundation/Foundation.h>

#import "DBHome.h"

@interface DBHomeKitService : NSObject <HMAccessoryDelegate, DBHomeKitEntity>



@property (readonly, nonatomic) NSDictionary *characteristics; // ivar: _characteristics
@property (readonly, nonatomic) NSDictionary *characteristicsByType; // ivar: _characteristicsByType
@property (readonly, nonatomic) BOOL current;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat distance;
@property (readonly, nonatomic) BOOL hasError;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) DBHome *home; // ivar: _home
@property (readonly, nonatomic) NSUUID *homeUniqueIdentifier; // ivar: _homeUniqueIdentifier
@property (readonly, nonatomic) BOOL interactive;
@property (nonatomic) BOOL lastWritten; // ivar: _lastWritten
@property (readonly, nonatomic) NSString *name;
@property (retain, nonatomic) CARObserverHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) BOOL pendingRead;
@property (readonly, nonatomic) BOOL pendingWrite;
@property (readonly, nonatomic) BOOL reachable;
@property (retain, nonatomic) HMService *service; // ivar: _service
@property (readonly, nonatomic) NSString *stateDescription;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;
@property (readonly, nonatomic) BOOL usable;


+(id)observerProtocol;
+(id)registeredServiceClasses;
+(id)serviceWithHome:(id)arg0 service:(id)arg1 ;
+(void)load;
+(void)registerServiceClass:(Class)arg0 ;
-(BOOL)_shouldUpdateLastUsedForCharacteristic:(id)arg0 ;
-(BOOL)_tracksLastUsed;
-(id)characteristicForName:(id)arg0 ;
-(id)characteristicForType:(id)arg0 ;
-(id)initWithHome:(id)arg0 service:(id)arg1 ;
-(id)managedCharacteristics;
-(void)_characteristicDidUpdate:(id)arg0 ;
-(void)accessory:(id)arg0 service:(id)arg1 didUpdateValueForCharacteristic:(id)arg2 ;
-(void)accessoryDidUpdateReachability:(id)arg0 ;
-(void)accessoryDidUpdateServices:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)refreshCharacteristicValues;
-(void)removeObserver:(id)arg0 ;


@end


#endif