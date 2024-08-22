// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSCOLLECTIONITEM_H
#define CLSCOLLECTIONITEM_H

@class NSString;
@protocol CLSRelationable;


#import "CLSObject.h"

@interface CLSCollectionItem : CLSObject <CLSRelationable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger displayOrder; // ivar: _displayOrder
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *referenceObjectID; // ivar: _referenceObjectID
@property (readonly) Class superclass;
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)relations;
-(BOOL)validateObject:(*id)arg0 ;
-(id)_init;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithHandout:(id)arg0 ;
-(id)initWithQuestionStep:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;


@end


#endif