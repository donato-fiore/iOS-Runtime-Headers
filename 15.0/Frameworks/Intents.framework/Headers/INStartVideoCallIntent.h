// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSTARTVIDEOCALLINTENT_H
#define INSTARTVIDEOCALLINTENT_H

@class NSArray, NSString;
@protocol INStartVideoCallIntentExport;


#import "INIntent.h"

@interface INStartVideoCallIntent : INIntent <INStartVideoCallIntentExport>



@property (nonatomic) NSInteger audioRoute;
@property (readonly, copy, nonatomic) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)configureAttributeSet:(id)arg0 includingData:(BOOL)arg1 ;
-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_spotlightContentType;
-(id)_titleWithLocalizer:(id)arg0 fromBundleURL:(id)arg1 ;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithContacts:(id)arg0 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif