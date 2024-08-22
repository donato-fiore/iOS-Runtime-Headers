// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMUSICPLAYERPLAYPARAMETERS_H
#define MPMUSICPLAYERPLAYPARAMETERS_H

@class NSString, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MPIdentifierSet.h"

@interface MPMusicPlayerPlayParameters : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *catalogID; // ivar: _catalogID
@property (readonly, copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, copy, nonatomic) MPIdentifierSet *identifiers; // ivar: _identifiers
@property (readonly, copy, nonatomic) NSString *itemID; // ivar: _itemID
@property (readonly, copy, nonatomic) NSString *itemKind; // ivar: _itemKind
@property (readonly, nonatomic, getter=isLibraryContent) BOOL libraryContent; // ivar: _libraryContent
@property (readonly, copy, nonatomic) NSString *persistentID; // ivar: _persistentID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif