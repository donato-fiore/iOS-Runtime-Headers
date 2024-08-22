// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCLASSMEMBER_H
#define CLSCLASSMEMBER_H

@class NSString;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSClassMember : CLSObject <CLSRelationable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL markedForDeletion; // ivar: _markedForDeletion
@property (copy, nonatomic) NSString *personID; // ivar: _personID
@property (nonatomic) NSUInteger roles; // ivar: _roles
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)objectIDForClassID:(id)arg0 andPersonID:(id)arg1 ;
+(id)relations;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithClassID:(id)arg0 personID:(id)arg1 roles:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif