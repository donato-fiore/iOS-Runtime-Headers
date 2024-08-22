// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRBUTTONRESOLVERCONTROLLER_H
#define BRBUTTONRESOLVERCONTROLLER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface BRButtonResolverController : NSObject {
    NSSet *_interfaces;
}


@property (readonly, nonatomic) BOOL isReady;
@property (readonly, nonatomic) NSUInteger maxAssetSlots;
@property (readonly, nonatomic) id *propertyList;
@property (readonly, nonatomic) NSUInteger unusedAssetSlots;


+(id)sharedInstance;
-(BOOL)disableStates:(id)arg0 clearAsset:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)enableStates:(id)arg0 error:(*id)arg1 ;
-(BOOL)playState:(NSUInteger)arg0 forSpeed:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setConfigs:(id)arg0 withAssets:(id)arg1 forStates:(id)arg2 error:(*id)arg3 ;
-(BOOL)setGlobalConfigs:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)scheduleReadyNotificationOnDispatchQueue:(id)arg0 withBlock:(id)arg1 ;


@end


#endif