// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSRECORD_H
#define LSRECORD_H

@class NSUUID, NSData, NSURL;
@protocol LSDetachable, NSSecureCoding, NSCopying, NSDiscardableContent;

#import <Foundation/Foundation.h>


@interface LSRecord : NSObject <LSDetachable, NSSecureCoding, NSCopying, NSDiscardableContent>

 {
    *void _resolvedProperties;
    LSContext _context;
    unsigned int _unitID;
    BOOL _tableID;
    BOOL _discardableContentCounter;
    BOOL _intentionallyInvalid;
    BOOL _shared;
}


@property (nonatomic, getter=_isShared, setter=_setShared:) BOOL _shared;
@property (readonly, nonatomic) id *compatibilityObject;
@property (readonly) NSUUID *databaseUUID;
@property (readonly) NSData *persistentIdentifier;
@property (readonly, nonatomic) NSURL *visualizerURL;


+(BOOL)hasDatabaseAccess;
+(BOOL)supportsSecureCoding;
+(id)_propertyClasses;
+(id)new;
+(void)initialize;
+(void)resolveAllPropertiesOfRecords:(*id)arg0 count:(NSUInteger)arg1 andDetachOnQueue:(id)arg2 ;
+(void)resolveAllPropertiesOfRecords:(id)arg0 andDetachOnQueue:(id)arg1 ;
-(*void)_resolvingMethods;
-(BOOL)beginContentAccess;
-(BOOL)isContentDiscarded;
-(id)_attributedDescription;
-(id)_compatibilityObjectWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(id)_initInvalid;
-(id)_initWithContext:(struct LSContext *)arg0 persistentIdentifier:(id)arg1 ;
-(id)_initWithContext:(struct LSContext *)arg0 persistentIdentifierData:(struct LSPersistentIdentifierData *)arg1 length:(NSUInteger)arg2 ;
-(id)_initWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 ;
-(id)_persistentIdentifierWithContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
-(id)_propertyClassesForCoding;
-(id)_replacementObjectForResolvedPropertyValue:(id)arg0 forGetter:(SEL)arg1 encoder:(id)arg2 ;
-(id)_resolvedPropertyValueForGetter:(SEL)arg0 ;
-(id)_resolvedPropertyValueForGetter:(SEL)arg0 nullPlaceholder:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPersistentIdentifier:(id)arg0 ;
-(unsigned int)tableID;
-(unsigned int)unitID;
-(void)_detachFromContext:(struct LSContext *)arg0 tableID:(unsigned int)arg1 unitID:(unsigned int)arg2 unitBytes:(*void)arg3 ;
// -(void)_ifAttached:(id)arg0 else:(unk)arg1  ;
-(void)_performBlockWithContext:(id)arg0 ;
-(void)_removeResolvedPropertyValueForGetter:(SEL)arg0 ;
-(void)_resolveAllProperties;
-(void)_setResolvedPropertyValue:(id)arg0 forGetter:(SEL)arg1 ;
-(void)dealloc;
-(void)detach;
-(void)discardContentIfPossible;
-(void)encodeWithCoder:(id)arg0 ;
-(void)endContentAccess;
-(void)resolveAllPropertiesAndDetachOnQueue:(id)arg0 ;


@end


#endif