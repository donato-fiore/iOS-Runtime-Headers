// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFNULLVALUESOURCE_H
#define HFNULLVALUESOURCE_H

@class NSString;
@protocol HFLightProfileValueSource, HFCharacteristicValueSource, HFMediaValueSource, HFCharacteristicOperationContextProviding;

#import <Foundation/Foundation.h>


@interface HFNullValueSource : NSObject <HFLightProfileValueSource, HFCharacteristicValueSource, HFMediaValueSource>



@property (readonly, nonatomic) NSObject<HFCharacteristicOperationContextProviding> *contextProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) Class superclass;


+(id)na_identity;
-(BOOL)hasPendingWritesForRouteID:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isNaturalLightingEnabledForProfile:(id)arg0 ;
-(BOOL)isNaturalLightingSupportedForProfile:(id)arg0 ;
-(NSInteger)lastPlaybackStateForProfileForRouteID:(id)arg0 ;
-(id)cachedPlaybackStateWriteErrorForRouteID:(id)arg0 ;
-(id)cachedValueForCharacteristic:(id)arg0 ;
-(id)mediaProfileContainerForRouteID:(id)arg0 ;
-(id)readValuesForCharacteristicTypes:(id)arg0 inServices:(id)arg1 ;
-(id)readValuesForCharacteristics:(id)arg0 ;
-(id)writeNaturalLightEnabledState:(BOOL)arg0 forProfile:(id)arg1 ;
-(id)writePlaybackState:(NSInteger)arg0 playbackArchive:(id)arg1 forRouteID:(id)arg2 ;
-(id)writeValuesForCharacteristics:(id)arg0 ;
-(void)beginTransactionWithReason:(id)arg0 readPolicy:(id)arg1 logger:(id)arg2 ;
-(void)clearCachedPlaybackStateWriteErrorWithReason:(id)arg0 notifyDelegates:(BOOL)arg1 ;
-(void)commitTransactionWithReason:(id)arg0 ;
-(void)fetchNaturalLightColorTemperatureForBrightness:(NSInteger)arg0 lightProfile:(id)arg1 completion:(id)arg2 ;


@end


#endif