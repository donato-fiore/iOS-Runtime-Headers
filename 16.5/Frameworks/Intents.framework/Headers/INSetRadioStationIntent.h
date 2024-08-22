// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSETRADIOSTATIONINTENT_H
#define INSETRADIOSTATIONINTENT_H

@class NSString, NSNumber;
@protocol INSetRadioStationIntentExport;


#import "INIntent.h"

@interface INSetRadioStationIntent : INIntent <INSetRadioStationIntentExport>



@property (readonly, copy, nonatomic) NSString *channel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *frequency;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *presetNumber;
@property (readonly, nonatomic) NSInteger radioType;
@property (readonly, copy, nonatomic) NSString *stationName;
@property (readonly) Class superclass;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithRadioType:(NSInteger)arg0 frequency:(id)arg1 stationName:(id)arg2 channel:(id)arg3 presetNumber:(id)arg4 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif