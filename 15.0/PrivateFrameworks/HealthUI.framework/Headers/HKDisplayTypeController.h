// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKDISPLAYTYPECONTROLLER_H
#define HKDISPLAYTYPECONTROLLER_H

@class _HKWheelchairUseCharacteristicCache, NSArray, NSDictionary;
@protocol _HKWheelchairUseCharacteristicCacheObserver;

#import <Foundation/Foundation.h>


@interface HKDisplayTypeController : NSObject <_HKWheelchairUseCharacteristicCacheObserver>

 {
    _HKWheelchairUseCharacteristicCache *_wheelchairUseCharacteristicCache;
    NSArray *_displayTypes;
    NSDictionary *_displayTypesByIdentifier;
    NSDictionary *_displayTypesByCategoryIdentifier;
    NSDictionary *_displayTypesByObjectType;
}




+(id)controllers;
+(id)displayTypeForObjectType:(id)arg0 wheelchairUse:(NSInteger)arg1 ;
+(id)sharedInstance;
+(id)sharedInstanceForHealthStore:(id)arg0 ;
+(struct os_unfair_lock_s )controllersLock;
+(void)initializeSharedDisplayTypes;
-(id)_displayTypeWithUpdatedWheelchairUserIfNecessary:(id)arg0 ;
-(id)allDisplayTypes;
-(id)displayTypeForObjectType:(id)arg0 ;
-(id)displayTypeForObjectTypeUnifyingBloodPressureTypes:(id)arg0 ;
-(id)displayTypeWithIdentifier:(id)arg0 ;
-(id)displayTypesForCategoryIdentifier:(NSInteger)arg0 ;
-(id)init;
-(id)initWithHealthStore:(id)arg0 ;
-(void)setWheelchairUseCharacteristicCache:(id)arg0 ;
-(void)wheelchairUseCharacteristicCache:(id)arg0 wheelchairUsageDidChange:(BOOL)arg1 ;


@end


#endif