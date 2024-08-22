// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INLISTRIDEOPTIONSINTENT_H
#define INLISTRIDEOPTIONSINTENT_H

@class NSString, CLPlacemark;
@protocol INListRideOptionsIntentExport;


#import "INIntent.h"

@interface INListRideOptionsIntent : INIntent <INListRideOptionsIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) CLPlacemark *dropOffLocation;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CLPlacemark *pickupLocation;
@property (readonly) Class superclass;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithPickupLocation:(id)arg0 dropOffLocation:(id)arg1 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif