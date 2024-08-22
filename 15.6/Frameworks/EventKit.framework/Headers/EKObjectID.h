// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKOBJECTID_H
#define EKOBJECTID_H

@class CADObjectID, NSURL, NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface EKObjectID : NSObject <NSCopying, NSSecureCoding>

 {
    BOOL _temporary;
    int _entityType;
    int _rowID;
}


@property (readonly, nonatomic) CADObjectID *CADObjectID;
@property (readonly, nonatomic) NSURL *URIRepresentation;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSString *entityName;
@property (readonly, nonatomic) NSInteger entityType;
@property (readonly, nonatomic) BOOL isTemporary;
@property (readonly, nonatomic) int rowID;
@property (readonly, nonatomic) NSString *stringRepresentation;


+(BOOL)supportsSecureCoding;
+(id)CADObjectIDsFromEKObjectIDs:(id)arg0 withGeneration:(int)arg1 ;
+(id)EKObjectIDsFromCADObjectIDs:(id)arg0 ;
+(id)EKObjectIDsFromData:(id)arg0 ;
+(id)EKObjectIDsFromData:(id)arg0 range:(struct _NSRange )arg1 ;
+(id)objectIDWithCADObjectID:(id)arg0 ;
+(id)objectIDWithEntityType:(int)arg0 rowID:(int)arg1 ;
+(id)objectIDWithURL:(id)arg0 ;
+(id)temporaryObjectIDWithEntityType:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CADObjectIDWithGeneration:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithEntityType:(int)arg0 rowID:(int)arg1 temporary:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif