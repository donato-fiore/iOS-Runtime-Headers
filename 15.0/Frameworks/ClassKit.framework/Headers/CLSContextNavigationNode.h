// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CLSCONTEXTNAVIGATIONNODE_H
#define CLSCONTEXTNAVIGATIONNODE_H

@class NSString;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSContextNavigationNode : CLSObject <CLSRelationable>



@property (copy, nonatomic) NSString *childObjectID; // ivar: _childObjectID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)objectIDForParentContextID:(id)arg0 andChildContextID:(id)arg1 ;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithParentContextID:(id)arg0 childContextID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif