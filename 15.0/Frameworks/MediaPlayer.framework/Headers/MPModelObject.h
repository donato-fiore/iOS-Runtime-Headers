// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELOBJECT_H
#define MPMODELOBJECT_H

@class NSMutableDictionary, NSString;
@protocol NSCopying, NSSecureCoding, NSObject;

#import <Foundation/Foundation.h>

#import "MPIdentifierSet.h"

@interface MPModelObject : NSObject <NSCopying, NSSecureCoding, NSObject>

 {
    MPIdentifierSet *_originalIdentifierSet;
    NSMutableDictionary *_storage;
    BOOL _isFinalized;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *humanDescription;
@property (readonly, copy, nonatomic) MPIdentifierSet *identifiers; // ivar: _identifiers
@property (readonly, nonatomic) MPLibraryAddStatusObserverConfiguration libraryAddStatusObserverConfiguration;
@property (readonly, nonatomic) NSInteger libraryRemovalSupportedOptions;
@property (readonly, nonatomic) MPIdentifierSet *originalIdentifierSet;
@property (readonly) Class superclass;


+(BOOL)_lookupPropertyForSelector:(SEL)arg0 result:(id)arg1 ;
+(BOOL)resolveInstanceMethod:(SEL)arg0 ;
+(BOOL)supportsKeepLocalStatusObservation;
+(BOOL)supportsLibraryAddStatusObservation;
+(BOOL)supportsLibraryRemoval;
+(BOOL)supportsSecureCoding;
+(NSInteger)genericObjectType;
+(id)_modelKeyForPropertySelector:(SEL)arg0 ;
+(id)classesForSecureCoding;
+(id)requiredKeepLocalStatusObservationProperties;
+(id)requiredLibraryAddStatusObservationProperties;
+(id)requiredLibraryRemovalProperties;
+(void)_indexProperties;
+(void)initialize;
+(void)performWithoutEnforcement:(id)arg0 ;
-(BOOL)_isModelKey:(id)arg0 ;
-(BOOL)hasLoadedValueForKey:(id)arg0 ;
-(BOOL)hasLoadedValuesForPropertySet:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_sanitizedStorage;
-(id)_stateDumpObject;
-(id)contentItemCollectionInfo;
-(id)copyWithIdentifiers:(id)arg0 ;
-(id)copyWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(id)copyWithIdentifiers:(id)arg0 propertySet:(id)arg1 ;
-(id)copyWithPropertySet:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 block:(id)arg1 ;
-(id)mediaItemPropertyValues;
-(id)mergeWithObject:(id)arg0 ;
-(id)newKeepLocalStatusObserverConfiguration;
-(id)valueForModelKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forModelKey:(id)arg1 ;
-(void)setValue:(id)arg0 forUndefinedKey:(id)arg1 ;


@end


#endif