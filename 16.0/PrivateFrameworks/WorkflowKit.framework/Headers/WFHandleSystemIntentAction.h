// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFHANDLESYSTEMINTENTACTION_H
#define WFHANDLESYSTEMINTENTACTION_H

@class INIntentDescription, NSArray, NSString, INIntentDescriptor, NSSet;
@protocol WFDynamicEnumerationDataSource;


#import "WFHandleIntentAction.h"

@interface WFHandleSystemIntentAction : WFHandleIntentAction <WFDynamicEnumerationDataSource>

 {
    INIntentDescription *_intentDescription;
    NSArray *_supportedAppIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) INIntentDescriptor *intentDescriptor; // ivar: _intentDescriptor
@property (readonly, nonatomic) NSSet *launchableIdentifiers; // ivar: _launchableIdentifiers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *supportedIdentifiers; // ivar: _supportedIdentifiers
@property (readonly, nonatomic) int token; // ivar: _token


+(id)sharedEnumerator;
-(BOOL)setParameterState:(id)arg0 forKey:(id)arg1 ;
-(BOOL)shouldBeIncludedInAppsList;
-(NSInteger)intentCategory;
-(id)accessoryIcon;
-(id)actionForAppIdentifier:(id)arg0 ;
-(id)appSection;
-(id)copyWithSerializedParameters:(id)arg0 ;
-(id)customAppNameForBundleIdentifier:(id)arg0 ;
-(id)customImageForBundleIdentifier:(id)arg0 ;
-(id)displayableAppIdentifier;
-(id)enumeration:(id)arg0 accessoryImageForPossibleState:(id)arg1 ;
-(id)enumeration:(id)arg0 localizedLabelForPossibleState:(id)arg1 ;
-(id)generatedIntentWithIdentifier:(id)arg0 input:(id)arg1 processedParameters:(id)arg2 error:(*id)arg3 ;
-(id)icon;
-(id)initWithIdentifier:(id)arg0 definition:(id)arg1 serializedParameters:(id)arg2 stringLocalizer:(id)arg3 ;
-(id)intentClassName;
-(id)intentDescription;
-(id)intentDescriptorWithIntentClassName:(id)arg0 launchableBundleId:(id)arg1 ;
-(id)launchableAppIdentifier;
-(id)launchableAppIdentifiers;
-(id)localizedAppName;
-(id)possibleStatesForEnumeration:(id)arg0 ;
-(id)selectedAppNotSupportedError;
-(id)slots;
-(id)supportedAppIdentifiers;
-(void)dealloc;
-(void)initializeParameters;
-(void)selectedAppDidChange;


@end


#endif