// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADOBJECTID_H
#define CADOBJECTID_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CADObjectID : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) int entityID; // ivar: _entityID
@property (readonly, nonatomic) int entityType; // ivar: _entityType
@property (readonly, nonatomic, getter=isTemporary) BOOL temporary; // ivar: _temporary


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)URIRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)entityName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithEntityType:(int)arg0 entityID:(int)arg1 ;
-(id)stringRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif