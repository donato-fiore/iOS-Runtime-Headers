// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INCREATETASKLISTINTENT_H
#define INCREATETASKLISTINTENT_H

@class NSString, NSArray;
@protocol INCreateTaskListIntentExport;


#import "INIntent.h"
#import "INSpeakableString.h"

@interface INCreateTaskListIntent : INIntent <INCreateTaskListIntentExport>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INSpeakableString *groupName;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *taskTitles;
@property (readonly, copy, nonatomic) INSpeakableString *title;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTitle:(id)arg0 taskTitles:(id)arg1 groupName:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif