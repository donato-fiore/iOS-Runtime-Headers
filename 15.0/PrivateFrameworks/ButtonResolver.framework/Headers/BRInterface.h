// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRINTERFACE_H
#define BRINTERFACE_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BRInterface : NSObject {
    NSMutableDictionary *_timestampDict;
}


@property (readonly, nonatomic) BOOL isReady; // ivar: _isReady
@property (readonly, nonatomic) NSUInteger maxAssetSlots; // ivar: _maxAssetSlots
@property (readonly, nonatomic) id *propertyList;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) NSUInteger unusedAssetSlots; // ivar: _unusedAssetSlots


+(id)interface;
+(id)interfaces;
-(BOOL)disableStates:(id)arg0 clearAsset:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)enableStates:(id)arg0 error:(*id)arg1 ;
-(BOOL)playState:(NSUInteger)arg0 forSpeed:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)setConfigs:(id)arg0 withAssets:(id)arg1 forStates:(id)arg2 error:(*id)arg3 ;
-(BOOL)setGlobalConfigs:(id)arg0 error:(*id)arg1 ;
-(id)description;
-(id)init;
-(void)dealloc;
-(void)scheduleReadyNotificationWithBlock:(id)arg0 ;
-(void)timestampWithLabel:(id)arg0 ;


@end


#endif