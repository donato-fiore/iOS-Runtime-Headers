// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFPERFORMENTITYQUERYCOMMAND_H
#define SFPERFORMENTITYQUERYCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFPerformEntityQueryCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"
#import "SFSymbolImage.h"

@interface SFPerformEntityQueryCommand : SFCommand <SFPerformEntityQueryCommand, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) NSString *entityIdentifier; // ivar: _entityIdentifier
@property (nonatomic) int entityType; // ivar: _entityType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly) Class superclass;
@property (retain, nonatomic) SFSymbolImage *symbolImage; // ivar: _symbolImage
@property (copy, nonatomic) NSString *tokenString; // ivar: _tokenString


+(BOOL)supportsSecureCoding;
-(BOOL)hasEntityType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif