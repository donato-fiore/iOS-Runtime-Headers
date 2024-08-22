// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NAGROUPDIFFOPERATION_H
#define NAGROUPDIFFOPERATION_H

@class NSString, NSNumber;
@protocol NADiffOperation, NADiffableItemGroup;

#import <Foundation/Foundation.h>


@interface NAGroupDiffOperation : NSObject <NADiffOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *fromIndex; // ivar: _fromIndex
@property (readonly, nonatomic) NSObject<NADiffableItemGroup> *group; // ivar: _group
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *operationDescription;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSNumber *toIndex; // ivar: _toIndex
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)deleteOperationWithGroup:(id)arg0 atIndex:(NSUInteger)arg1 ;
+(id)insertOperationWithGroup:(id)arg0 atIndex:(NSUInteger)arg1 ;
+(id)moveOperationWithGroup:(id)arg0 fromIndex:(NSUInteger)arg1 toIndex:(NSUInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_operationDescriptionWithVerboseType:(BOOL)arg0 ;
-(id)initWithOperationType:(NSUInteger)arg0 group:(id)arg1 fromIndex:(id)arg2 toIndex:(id)arg3 ;


@end


#endif