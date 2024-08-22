// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HAPKEYBAG_H
#define HAPKEYBAG_H

@class NSString, NSArray;
@protocol HMFLogging, HAPKeyStore;

#import <Foundation/Foundation.h>


@interface HAPKeyBag : NSObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (copy, nonatomic) NSString *accessoryIdentifier; // ivar: _accessoryIdentifier
@property (retain, nonatomic) NSArray *availableKeysToTry; // ivar: _availableKeysToTry
@property (nonatomic) NSInteger currentIndexInBag; // ivar: _currentIndexInBag
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isEmpty) BOOL empty;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<HAPKeyStore> *keyStore; // ivar: _keyStore
@property (readonly) Class superclass;
@property (readonly) NSUInteger totalIdentities;


+(id)logCategory;
-(BOOL)isValidIndex:(NSInteger)arg0 ;
-(NSInteger)getCurrentIndexInBag;
-(id)_populateBagWithPairingIdentitiesForAccessory:(id)arg0 fromStore:(id)arg1 ;
-(id)currentIdentity;
-(id)initWithAccessoryIdentifier:(id)arg0 keyStore:(id)arg1 ;
-(id)initWithAccessoryIdentifier:(id)arg0 keyStore:(id)arg1 controllerKeyList:(id)arg2 ;
-(id)nextIdentity;
-(void)refreshKeys;


@end


#endif