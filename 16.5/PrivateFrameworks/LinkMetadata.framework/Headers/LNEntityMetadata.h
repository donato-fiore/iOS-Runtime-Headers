// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNENTITYMETADATA_H
#define LNENTITYMETADATA_H

@class NSDictionary, NSString, NSOrderedSet, NSArray;
@protocol NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping;

#import <Foundation/Foundation.h>

#import "LNTypeDisplayRepresentation.h"
#import "LNStaticDeferredLocalizedString.h"

@interface LNEntityMetadata : NSObject <NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping>



@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations; // ivar: _availabilityAnnotations
@property (readonly, copy, nonatomic) NSString *customIntentTypeClassName; // ivar: _customIntentTypeClassName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) LNTypeDisplayRepresentation *displayRepresentation; // ivar: _displayRepresentation
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *displayTypeName;
@property (readonly, copy, nonatomic) NSOrderedSet *effectiveBundleIdentifiers; // ivar: _effectiveBundleIdentifiers
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *mangledTypeName; // ivar: _mangledTypeName
@property (readonly, copy, nonatomic) NSDictionary *mangledTypeNameByBundleIdentifier; // ivar: _mangledTypeNameByBundleIdentifier
@property (readonly, copy, nonatomic) NSArray *properties; // ivar: _properties
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransient) BOOL transient; // ivar: _transient
@property (readonly, copy, nonatomic) NSString *typeName;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 transient:(BOOL)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 displayRepresentation:(id)arg5 properties:(id)arg6 customIntentTypeClassName:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 transient:(BOOL)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 displayRepresentation:(id)arg5 properties:(id)arg6 customIntentTypeClassName:(id)arg7 availabilityAnnotations:(id)arg8 ;
-(id)initWithIdentifier:(id)arg0 transient:(BOOL)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 displayTypeName:(id)arg5 properties:(id)arg6 customIntentTypeClassName:(id)arg7 ;
-(id)initWithTypeName:(id)arg0 displayTypeName:(id)arg1 properties:(id)arg2 ;
-(id)initWithTypeName:(id)arg0 displayTypeName:(id)arg1 properties:(id)arg2 customIntentTypeClassName:(id)arg3 ;
-(id)initWithTypeName:(id)arg0 mangledTypeName:(id)arg1 mangledTypeNameByBundleIdentifier:(id)arg2 effectiveBundleIdentifiers:(id)arg3 displayTypeName:(id)arg4 properties:(id)arg5 customIntentTypeClassName:(id)arg6 ;
-(id)initWithTypeName:(id)arg0 properties:(id)arg1 ;
-(id)mangledTypeNameForBundleIdentifier:(id)arg0 ;
-(id)metadataByAddingEffectiveBundleIdentifiers:(id)arg0 mangledTypeName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif