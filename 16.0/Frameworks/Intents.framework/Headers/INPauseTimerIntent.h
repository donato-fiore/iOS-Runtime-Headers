// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INPAUSETIMERINTENT_H
#define INPAUSETIMERINTENT_H

@class NSString, NSNumber;
@protocol INPauseTimerIntentExport;


#import "INIntent.h"
#import "INTimer.h"

@interface INPauseTimerIntent : INIntent <INPauseTimerIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *pauseMultiple;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INTimer *targetTimer;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTargetTimer:(id)arg0 pauseMultiple:(id)arg1 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif