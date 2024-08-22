// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INCREATETIMERINTENT_H
#define INCREATETIMERINTENT_H

@class NSString;
@protocol INCreateTimerIntentExport;


#import "INIntent.h"
#import "INSpeakableString.h"

@interface INCreateTimerIntent : INIntent <INCreateTimerIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INSpeakableString *label;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger type;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)domain;
-(id)initWithLabel:(id)arg0 duration:(CGFloat)arg1 type:(NSInteger)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif