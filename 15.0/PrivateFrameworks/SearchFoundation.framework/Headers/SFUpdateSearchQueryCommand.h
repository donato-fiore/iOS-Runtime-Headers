// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUPDATESEARCHQUERYCOMMAND_H
#define SFUPDATESEARCHQUERYCOMMAND_H

@class NSString, NSDictionary, NSData;
@protocol SFUpdateSearchQueryCommand, NSSecureCoding, NSCopying;


#import "SFCommand.h"

@interface SFUpdateSearchQueryCommand : SFCommand <SFUpdateSearchQueryCommand, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int querySource; // ivar: _querySource
@property (copy, nonatomic) NSString *searchString; // ivar: _searchString
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)hasQuerySource;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif