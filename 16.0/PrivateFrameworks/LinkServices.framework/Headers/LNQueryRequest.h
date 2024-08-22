// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNQUERYREQUEST_H
#define LNQUERYREQUEST_H

@class NSString, NSArray, NSNumber, LNPropertyQuery;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface LNQueryRequest : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *entityIdentifier; // ivar: _entityIdentifier
@property (readonly, copy, nonatomic) NSString *entityMangledTypeName; // ivar: _entityMangledTypeName
@property (readonly, nonatomic) NSArray *identifiersToMatch; // ivar: _identifiersToMatch
@property (readonly, copy, nonatomic) NSArray *intentMangledTypeNames; // ivar: _intentMangledTypeNames
@property (readonly, nonatomic) NSNumber *maximumResultCount; // ivar: _maximumResultCount
@property (readonly, nonatomic) LNPropertyQuery *propertyQuery; // ivar: _propertyQuery
@property (readonly, copy, nonatomic) NSString *queryIdentifier; // ivar: _queryIdentifier
@property (readonly, copy, nonatomic) NSString *queryMangledTypeName; // ivar: _queryMangledTypeName
@property (readonly, nonatomic) NSInteger requestType; // ivar: _requestType
@property (readonly, nonatomic) NSArray *sortingOptions; // ivar: _sortingOptions
@property (readonly, copy, nonatomic) NSString *stringToMatch; // ivar: _stringToMatch


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifiers:(id)arg0 entityMangledTypeName:(id)arg1 ;
-(id)initWithIdentifiers:(id)arg0 entityType:(id)arg1 ;
-(id)initWithPropertyQuery:(id)arg0 maximumResultCount:(id)arg1 entityType:(id)arg2 intentMangledTypeNames:(id)arg3 sortingOptions:(id)arg4 ;
-(id)initWithPropertyQuery:(id)arg0 maximumResultCount:(id)arg1 queryMangledTypeName:(id)arg2 sortingOptions:(id)arg3 ;
-(id)initWithPropertyQuery:(id)arg0 maximumResultCount:(id)arg1 queryType:(id)arg2 sortingOptions:(id)arg3 ;
-(id)initWithRequestType:(NSInteger)arg0 identifiersToMatch:(id)arg1 stringToMatch:(id)arg2 propertyQuery:(id)arg3 maximumResultCount:(id)arg4 entityIdentifier:(id)arg5 entityMangledTypeName:(id)arg6 queryIdentifier:(id)arg7 queryMangledTypeName:(id)arg8 intentMangledTypeNames:(id)arg9 sortingOptions:(id)arg10 ;
-(id)initWithString:(id)arg0 entityMangledTypeName:(id)arg1 ;
-(id)initWithString:(id)arg0 entityType:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif