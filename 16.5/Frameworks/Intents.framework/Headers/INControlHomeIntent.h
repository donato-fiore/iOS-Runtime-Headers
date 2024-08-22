// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCONTROLHOMEINTENT_H
#define INCONTROLHOMEINTENT_H

@class NSArray, NSString;
@protocol INControlHomeIntentExport;


#import "INIntent.h"
#import "INDateComponentsRange.h"
#import "INHomeUserTask.h"

@interface INControlHomeIntent : INIntent <INControlHomeIntentExport>



@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSArray *filters;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INDateComponentsRange *time;
@property (readonly, copy, nonatomic) INHomeUserTask *userTask;


-(BOOL)_hasTitle;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_initWithIdentifier:(id)arg0 backingStore:(id)arg1 schema:(id)arg2 error:(*id)arg3 ;
-(id)_metadata;
-(id)_subtitleWithLocalizer:(id)arg0 fromBundleURL:(id)arg1 ;
-(id)_titleWithLocalizer:(id)arg0 fromBundleURL:(id)arg1 ;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithContents:(id)arg0 ;
-(id)initWithUserTask:(id)arg0 filters:(id)arg1 ;
-(id)initWithUserTask:(id)arg0 filters:(id)arg1 time:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif