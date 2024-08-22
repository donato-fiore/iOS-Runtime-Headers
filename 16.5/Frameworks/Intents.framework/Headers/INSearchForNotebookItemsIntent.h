// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INSEARCHFORNOTEBOOKITEMSINTENT_H
#define INSEARCHFORNOTEBOOKITEMSINTENT_H

@class NSString, CLPlacemark;
@protocol INSearchForNotebookItemsIntentExport;


#import "INIntent.h"
#import "INDateComponentsRange.h"
#import "INSpeakableString.h"

@interface INSearchForNotebookItemsIntent : INIntent <INSearchForNotebookItemsIntentExport>



@property (readonly, copy, nonatomic) NSString *content;
@property (readonly, nonatomic) NSInteger dateSearchType;
@property (readonly, copy, nonatomic) INDateComponentsRange *dateTime;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) INSpeakableString *groupName;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL includeAllNoteContents;
@property (readonly, nonatomic) NSInteger itemType;
@property (readonly, copy, nonatomic) CLPlacemark *location;
@property (readonly, nonatomic) NSInteger locationSearchType;
@property (readonly, copy, nonatomic) NSString *notebookItemIdentifier;
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger taskPriority;
@property (readonly, nonatomic) NSUInteger temporalEventTriggerTypes;
@property (readonly, copy, nonatomic) INSpeakableString *title;


-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithTitle:(id)arg0 content:(id)arg1 itemType:(NSInteger)arg2 status:(NSInteger)arg3 location:(id)arg4 locationSearchType:(NSInteger)arg5 dateTime:(id)arg6 dateSearchType:(NSInteger)arg7 ;
-(id)initWithTitle:(id)arg0 content:(id)arg1 itemType:(NSInteger)arg2 status:(NSInteger)arg3 location:(id)arg4 locationSearchType:(NSInteger)arg5 dateTime:(id)arg6 dateSearchType:(NSInteger)arg7 notebookItemIdentifier:(id)arg8 ;
-(id)initWithTitle:(id)arg0 content:(id)arg1 itemType:(NSInteger)arg2 status:(NSInteger)arg3 location:(id)arg4 locationSearchType:(NSInteger)arg5 dateTime:(id)arg6 dateSearchType:(NSInteger)arg7 temporalEventTriggerTypes:(NSUInteger)arg8 taskPriority:(NSInteger)arg9 notebookItemIdentifier:(id)arg10 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif