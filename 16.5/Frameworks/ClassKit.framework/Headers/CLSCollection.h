// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSCOLLECTION_H
#define CLSCOLLECTION_H

@class NSString, NSDate;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSCollection : CLSObject <CLSRelationable>



@property (copy, nonatomic) NSString *colorName; // ivar: _colorName
@property (retain, nonatomic) NSDate *dateClassCreated; // ivar: _dateClassCreated
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *iconID; // ivar: _iconID
@property (copy, nonatomic) NSString *location; // ivar: _location
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(NSUInteger)childCount;
-(NSUInteger)childCount:(NSInteger)arg0 ;
-(id)_init;
-(id)children;
-(id)children:(NSInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 name:(id)arg1 location:(id)arg2 type:(NSInteger)arg3 icon:(id)arg4 ;
-(void)addCollectionItem:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removeCollectionItem:(id)arg0 ;


@end


#endif