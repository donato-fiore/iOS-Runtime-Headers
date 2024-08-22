// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNENUMMETADATA_H
#define LNENUMMETADATA_H

@class NSDictionary, NSArray, NSString, NSOrderedSet;
@protocol NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping;

#import <Foundation/Foundation.h>

#import "LNTypeDisplayRepresentation.h"
#import "LNStaticDeferredLocalizedString.h"

@interface LNEnumMetadata : NSObject <NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping>



@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations; // ivar: _availabilityAnnotations
@property (readonly, copy, nonatomic) NSArray *cases; // ivar: _cases
@property (readonly, copy, nonatomic) NSString *customIntentEnumTypeName; // ivar: _customIntentEnumTypeName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) LNTypeDisplayRepresentation *displayRepresentation; // ivar: _displayRepresentation
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *displayTypeName;
@property (readonly, copy, nonatomic) NSOrderedSet *effectiveBundleIdentifiers; // ivar: _effectiveBundleIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *mangledTypeName; // ivar: _mangledTypeName
@property (readonly, copy, nonatomic) NSDictionary *mangledTypeNameByBundleIdentifier; // ivar: _mangledTypeNameByBundleIdentifier
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 cases:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 displayTypeName:(id)arg1 cases:(id)arg2 ;
-(id)initWithIdentifier:(id)arg0 displayTypeName:(id)arg1 cases:(id)arg2 customIntentEnumTypeName:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 mangledTypeNameByBundleIdentifier:(id)arg2 effectiveBundleIdentifiers:(id)arg3 displayRepresentation:(id)arg4 cases:(id)arg5 customIntentEnumTypeName:(id)arg6 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 mangledTypeNameByBundleIdentifier:(id)arg2 effectiveBundleIdentifiers:(id)arg3 displayRepresentation:(id)arg4 cases:(id)arg5 customIntentEnumTypeName:(id)arg6 availabilityAnnotations:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 mangledTypeName:(id)arg1 mangledTypeNameByBundleIdentifier:(id)arg2 effectiveBundleIdentifiers:(id)arg3 displayTypeName:(id)arg4 cases:(id)arg5 customIntentEnumTypeName:(id)arg6 ;
-(id)mangledTypeNameForBundleIdentifier:(id)arg0 ;
-(id)metadataByAddingEffectiveBundleIdentifiers:(id)arg0 mangledTypeName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif