// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSCLASS_H
#define CLSCLASS_H

@class NSArray, NSString, NSPersonNameComponents;
@protocol CLSRelationable, CLSContactsSearchable;


#import "CLSObject.h"

@interface CLSClass : CLSObject <CLSRelationable, CLSContactsSearchable>



@property (readonly, nonatomic) NSArray *classMembers;
@property (copy, nonatomic) NSString *className; // ivar: _className
@property (copy, nonatomic) NSString *customClassName; // ivar: _customClassName
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *emailAddress;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *iconID; // ivar: _iconID
@property BOOL isEditable; // ivar: _isEditable
@property (copy, nonatomic) NSString *locationID; // ivar: _locationID
@property (readonly, nonatomic) NSPersonNameComponents *nameComponents;
@property (nonatomic) NSInteger originatingSource; // ivar: _originatingSource
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (nonatomic) NSInteger source; // ivar: _source
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *tempObjectID; // ivar: _tempObjectID


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocation:(id)arg0 customName:(id)arg1 ;
-(void)addPerson:(id)arg0 withRole:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)removePerson:(id)arg0 withRole:(NSUInteger)arg1 ;


@end


#endif