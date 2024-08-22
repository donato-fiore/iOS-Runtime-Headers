// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNACTIONMETADATA_H
#define LNACTIONMETADATA_H

@class NSDictionary, NSString, NSOrderedSet, NSArray;
@protocol NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping;

#import <Foundation/Foundation.h>

#import "LNActionConfiguration.h"
#import "LNStaticDeferredLocalizedString.h"
#import "LNActionDescriptionMetadata.h"
#import "LNValueType.h"

@interface LNActionMetadata : NSObject <NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping>



@property (readonly, nonatomic) LNActionConfiguration *actionConfiguration; // ivar: _actionConfiguration
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *actionDescription;
@property (readonly, nonatomic) NSInteger authenticationPolicy; // ivar: _authenticationPolicy
@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations; // ivar: _availabilityAnnotations
@property (readonly, nonatomic) NSInteger bundleMetadataVersion; // ivar: _bundleMetadataVersion
@property (readonly, copy, nonatomic) NSString *customIntentClassName; // ivar: _customIntentClassName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) LNActionDescriptionMetadata *descriptionMetadata; // ivar: _descriptionMetadata
@property (readonly, copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, copy, nonatomic) NSOrderedSet *effectiveBundleIdentifiers; // ivar: _effectiveBundleIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *iconSystemImageName;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *mangledTypeName; // ivar: _mangledTypeName
@property (readonly, copy, nonatomic) NSDictionary *mangledTypeNameByBundleIdentifier; // ivar: _mangledTypeNameByBundleIdentifier
@property (readonly, copy, nonatomic) NSString *nullableEffectiveBundleIdentifier; // ivar: _nullableEffectiveBundleIdentifier
@property (readonly, nonatomic) BOOL openAppWhenRun; // ivar: _openAppWhenRun
@property (readonly, nonatomic) NSUInteger outputFlags; // ivar: _outputFlags
@property (readonly, copy, nonatomic) LNValueType *outputType; // ivar: _outputType
@property (readonly, copy, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly, nonatomic) NSInteger presentationStyle;
@property (readonly, nonatomic) BOOL requiresMDMChecks;
@property (readonly, nonatomic, getter=isSessionStartingAction) BOOL sessionStartingAction;
@property (readonly, copy, nonatomic) NSDictionary *shortcutsMetadata; // ivar: _shortcutsMetadata
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *systemProtocols; // ivar: _systemProtocols
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title; // ivar: _title
@property (readonly, copy, nonatomic) NSDictionary *typeSpecificMetadata; // ivar: _typeSpecificMetadata


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)actionMetadataWithParameters:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 effectiveBundleIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 presentationStyle:(NSInteger)arg4 outputType:(id)arg5 parameters:(id)arg6 systemProtocols:(id)arg7 actionConfiguration:(id)arg8 typeSpecificMetadata:(id)arg9 ;
-(id)initWithIdentifier:(id)arg0 effectiveBundleIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 presentationStyle:(NSInteger)arg4 outputType:(id)arg5 parameters:(id)arg6 systemProtocols:(id)arg7 actionConfiguration:(id)arg8 typeSpecificMetadata:(id)arg9 iconSystemImageName:(id)arg10 shortcutsMetadata:(id)arg11 ;
-(id)initWithIdentifier:(id)arg0 effectiveBundleIdentifier:(id)arg1 title:(id)arg2 description:(id)arg3 presentationStyle:(NSInteger)arg4 outputType:(id)arg5 parameters:(id)arg6 systemProtocols:(id)arg7 actionConfiguration:(id)arg8 typeSpecificMetadata:(id)arg9 shortcutsMetadata:(id)arg10 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifier:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(NSInteger)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 actionConfiguration:(id)arg9 typeSpecificMetadata:(id)arg10 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifier:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(NSInteger)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 actionConfiguration:(id)arg9 typeSpecificMetadata:(id)arg10 customIntentClassName:(id)arg11 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifier:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(NSInteger)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 actionConfiguration:(id)arg9 typeSpecificMetadata:(id)arg10 iconSystemImageName:(id)arg11 shortcutsMetadata:(id)arg12 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifier:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(NSInteger)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 actionConfiguration:(id)arg9 typeSpecificMetadata:(id)arg10 iconSystemImageName:(id)arg11 shortcutsMetadata:(id)arg12 customIntentClassName:(id)arg13 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifier:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(NSInteger)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 sessionStartingAction:(BOOL)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 customIntentClassName:(id)arg12 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifier:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(NSInteger)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 sessionStartingAction:(BOOL)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 iconSystemImageName:(id)arg12 shortcutsMetadata:(id)arg13 customIntentClassName:(id)arg14 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifiers:(id)arg2 bundleMetadataVersion:(NSInteger)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(NSInteger)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 iconSystemImageName:(id)arg12 shortcutsMetadata:(id)arg13 customIntentClassName:(id)arg14 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifiers:(id)arg2 bundleMetadataVersion:(NSInteger)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(NSInteger)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 sessionStartingAction:(BOOL)arg10 actionConfiguration:(id)arg11 typeSpecificMetadata:(id)arg12 iconSystemImageName:(id)arg13 shortcutsMetadata:(id)arg14 customIntentClassName:(id)arg15 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifiers:(id)arg2 bundleMetadataVersion:(NSInteger)arg3 title:(id)arg4 description:(id)arg5 presentationStyle:(NSInteger)arg6 outputType:(id)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 sessionStartingAction:(BOOL)arg10 actionConfiguration:(id)arg11 typeSpecificMetadata:(id)arg12 iconSystemImageName:(id)arg13 shortcutsMetadata:(id)arg14 customIntentClassName:(id)arg15 requiresMDMChecks:(BOOL)arg16 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifiers:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(NSInteger)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 actionConfiguration:(id)arg9 typeSpecificMetadata:(id)arg10 customIntentClassName:(id)arg11 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifiers:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(NSInteger)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 sessionStartingAction:(BOOL)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 customIntentClassName:(id)arg12 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 effectiveBundleIdentifiers:(id)arg2 title:(id)arg3 description:(id)arg4 presentationStyle:(NSInteger)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 sessionStartingAction:(BOOL)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 iconSystemImageName:(id)arg12 shortcutsMetadata:(id)arg13 customIntentClassName:(id)arg14 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 mangledTypeNameByBundleIdentifier:(id)arg2 effectiveBundleIdentifiers:(id)arg3 bundleMetadataVersion:(NSInteger)arg4 title:(id)arg5 description:(id)arg6 presentationStyle:(NSInteger)arg7 outputType:(id)arg8 parameters:(id)arg9 systemProtocols:(id)arg10 actionConfiguration:(id)arg11 typeSpecificMetadata:(id)arg12 iconSystemImageName:(id)arg13 shortcutsMetadata:(id)arg14 customIntentClassName:(id)arg15 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 mangledTypeNameByBundleIdentifier:(id)arg2 effectiveBundleIdentifiers:(id)arg3 bundleMetadataVersion:(NSInteger)arg4 title:(id)arg5 descriptionMetadata:(id)arg6 openAppWhenRun:(BOOL)arg7 authenticationPolicy:(NSInteger)arg8 outputType:(id)arg9 outputFlags:(NSUInteger)arg10 parameters:(id)arg11 systemProtocols:(id)arg12 actionConfiguration:(id)arg13 typeSpecificMetadata:(id)arg14 customIntentClassName:(id)arg15 availabilityAnnotations:(id)arg16 shortcutsMetadata:(id)arg17 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 mangledTypeNameByBundleIdentifier:(id)arg2 effectiveBundleIdentifiers:(id)arg3 bundleMetadataVersion:(NSInteger)arg4 title:(id)arg5 descriptionMetadata:(id)arg6 openAppWhenRun:(BOOL)arg7 authenticationPolicy:(NSInteger)arg8 outputType:(id)arg9 outputFlags:(NSUInteger)arg10 parameters:(id)arg11 systemProtocols:(id)arg12 actionConfiguration:(id)arg13 typeSpecificMetadata:(id)arg14 customIntentClassName:(id)arg15 shortcutsMetadata:(id)arg16 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 mangledTypeNameByBundleIdentifier:(id)arg2 effectiveBundleIdentifiers:(id)arg3 bundleMetadataVersion:(NSInteger)arg4 title:(id)arg5 descriptionMetadata:(id)arg6 presentationStyle:(NSInteger)arg7 authenticationPolicy:(NSInteger)arg8 outputType:(id)arg9 outputFlags:(NSUInteger)arg10 parameters:(id)arg11 systemProtocols:(id)arg12 actionConfiguration:(id)arg13 typeSpecificMetadata:(id)arg14 iconSystemImageName:(id)arg15 customIntentClassName:(id)arg16 shortcutsMetadata:(id)arg17 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 mangledTypeNameByBundleIdentifier:(id)arg2 effectiveBundleIdentifiers:(id)arg3 bundleMetadataVersion:(NSInteger)arg4 title:(id)arg5 descriptionMetadata:(id)arg6 presentationStyle:(NSInteger)arg7 authenticationPolicy:(NSInteger)arg8 outputType:(id)arg9 parameters:(id)arg10 systemProtocols:(id)arg11 actionConfiguration:(id)arg12 typeSpecificMetadata:(id)arg13 iconSystemImageName:(id)arg14 customIntentClassName:(id)arg15 shortcutsMetadata:(id)arg16 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 title:(id)arg2 description:(id)arg3 presentationStyle:(NSInteger)arg4 outputType:(id)arg5 parameters:(id)arg6 systemProtocols:(id)arg7 actionConfiguration:(id)arg8 typeSpecificMetadata:(id)arg9 customIntentClassName:(id)arg10 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 title:(id)arg2 descriptionMetadata:(id)arg3 openAppWhenRun:(BOOL)arg4 authenticationPolicy:(NSInteger)arg5 outputType:(id)arg6 outputFlags:(NSUInteger)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 customIntentClassName:(id)arg12 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 title:(id)arg2 descriptionMetadata:(id)arg3 presentationStyle:(NSInteger)arg4 authenticationPolicy:(NSInteger)arg5 outputType:(id)arg6 outputFlags:(NSUInteger)arg7 parameters:(id)arg8 systemProtocols:(id)arg9 actionConfiguration:(id)arg10 typeSpecificMetadata:(id)arg11 customIntentClassName:(id)arg12 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 title:(id)arg2 descriptionMetadata:(id)arg3 presentationStyle:(NSInteger)arg4 authenticationPolicy:(NSInteger)arg5 outputType:(id)arg6 parameters:(id)arg7 systemProtocols:(id)arg8 actionConfiguration:(id)arg9 typeSpecificMetadata:(id)arg10 customIntentClassName:(id)arg11 ;
-(id)initWithIdentifier:(id)arg0 title:(id)arg1 description:(id)arg2 presentationStyle:(NSInteger)arg3 outputType:(id)arg4 parameters:(id)arg5 systemProtocols:(id)arg6 actionConfiguration:(id)arg7 ;
-(id)mangledTypeNameForBundleIdentifier:(id)arg0 ;
-(id)metadataByAddingEffectiveBundleIdentifiers:(id)arg0 mangledTypeName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif