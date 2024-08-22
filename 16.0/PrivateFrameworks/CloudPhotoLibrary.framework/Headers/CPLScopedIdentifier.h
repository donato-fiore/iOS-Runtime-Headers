// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPLSCOPEDIDENTIFIER_H
#define CPLSCOPEDIDENTIFIER_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CPLScopedIdentifier : NSObject <NSCopying, NSSecureCoding>

 {
    NSInteger _scopeIndex;
}


@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSString *scopeIdentifier; // ivar: _scopeIdentifier
@property (nonatomic) NSInteger scopeIndex;


+(BOOL)supportsSecureCoding;
+(id)descriptionWithScopeIdentifier:(id)arg0 identifier:(id)arg1 ;
+(id)scopedIdentifierWithString:(id)arg0 includeScopeIndex:(BOOL)arg1 ;
+(id)scopedIdentifierWithString:(id)arg0 includeScopeIndex:(BOOL)arg1 defaultScopeIdentifier:(id)arg2 ;
+(id)scopedIdentifiersFromArrayOfUnknownIdentifiers:(id)arg0 ;
+(id)scopedIdentifiersFromDictionaryOfUnknownIdentifiers:(id)arg0 ;
+(id)scopedIdentifiersFromSetOfUnknownIdentifiers:(id)arg0 ;
+(id)unscopedIdentifiersFromArrayOfScopedIdentifiers:(id)arg0 ;
+(id)unscopedIdentifiersFromDictionaryOfScopedIdentifiers:(id)arg0 ;
+(id)unscopedIdentifiersFromSetOfScopedIdentifiers:(id)arg0 ;
-(BOOL)cplSpecialIsEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isInMainScope;
-(NSUInteger)cplSpecialHash;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithNoScopeIndex;
-(id)initInMainScopeWithIdentifier:(id)arg0 ;
-(id)initRelativeToScopedIdentifier:(id)arg0 identifier:(id)arg1 ;
-(id)initWithCPLArchiver:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithScopeIdentifier:(id)arg0 identifier:(id)arg1 ;
-(id)initWithScopeIdentifier:(id)arg0 identifier:(id)arg1 scopeIndex:(NSInteger)arg2 ;
-(id)plistArchiveWithCPLArchiver:(id)arg0 ;
-(id)redactedDescription;
-(id)safeFilename;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif