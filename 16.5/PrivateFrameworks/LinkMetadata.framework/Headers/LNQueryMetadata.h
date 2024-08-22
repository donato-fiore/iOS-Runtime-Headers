// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNQUERYMETADATA_H
#define LNQUERYMETADATA_H

@class NSDictionary, NSString, NSOrderedSet, NSArray;
@protocol NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping;

#import <Foundation/Foundation.h>


@interface LNQueryMetadata : NSObject <NSSecureCoding, NSCopying, LNEffectiveBundleIdentifierGrouping>



@property (readonly, copy, nonatomic) NSDictionary *availabilityAnnotations; // ivar: _availabilityAnnotations
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSOrderedSet *effectiveBundleIdentifiers; // ivar: _effectiveBundleIdentifiers
@property (readonly, copy, nonatomic) NSString *entityType; // ivar: _entityType
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *mangledTypeName; // ivar: _mangledTypeName
@property (readonly, copy, nonatomic) NSDictionary *mangledTypeNameByBundleIdentifier; // ivar: _mangledTypeNameByBundleIdentifier
@property (readonly, copy, nonatomic) NSArray *parameters; // ivar: _parameters
@property (readonly, copy, nonatomic) NSString *queryType;
@property (readonly, copy, nonatomic) NSArray *sortingOptions; // ivar: _sortingOptions
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 entityType:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 parameters:(id)arg5 sortingOptions:(id)arg6 ;
-(id)initWithIdentifier:(id)arg0 entityType:(id)arg1 mangledTypeName:(id)arg2 mangledTypeNameByBundleIdentifier:(id)arg3 effectiveBundleIdentifiers:(id)arg4 parameters:(id)arg5 sortingOptions:(id)arg6 availabilityAnnotations:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 queryType:(id)arg1 entityType:(id)arg2 mangledTypeName:(id)arg3 mangledTypeNameByBundleIdentifier:(id)arg4 effectiveBundleIdentifiers:(id)arg5 parameters:(id)arg6 sortingOptions:(id)arg7 ;
-(id)initWithIdentifier:(id)arg0 queryType:(id)arg1 entityType:(id)arg2 parameters:(id)arg3 sortingOptions:(id)arg4 ;
-(id)mangledTypeNameForBundleIdentifier:(id)arg0 ;
-(id)metadataByAddingEffectiveBundleIdentifiers:(id)arg0 mangledTypeName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif