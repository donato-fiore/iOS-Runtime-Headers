// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFITEMDIFFOPERATION_H
#define HFITEMDIFFOPERATION_H

@class NSString, NSIndexPath;
@protocol HFDiffOperation;

#import <Foundation/Foundation.h>


@interface HFItemDiffOperation : NSObject <HFDiffOperation>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSIndexPath *fromIndexPath; // ivar: _fromIndexPath
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) id *item; // ivar: _item
@property (readonly, copy, nonatomic) NSString *operationDescription;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSIndexPath *toIndexPath; // ivar: _toIndexPath
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(id)deleteOperationWithItem:(id)arg0 atIndexPath:(id)arg1 ;
+(id)insertOperationWithItem:(id)arg0 atIndexPath:(id)arg1 ;
+(id)moveOperationWithItem:(id)arg0 fromIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
+(id)reloadOperationWithItem:(id)arg0 atIndexPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_operationDescriptionWithVerboseType:(BOOL)arg0 ;
-(id)initWithOperationType:(NSUInteger)arg0 item:(id)arg1 fromIndexPath:(id)arg2 toIndexPath:(id)arg3 ;


@end


#endif