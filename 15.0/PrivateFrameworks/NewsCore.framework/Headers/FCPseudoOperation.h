// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCPSEUDOOPERATION_H
#define FCPSEUDOOPERATION_H

@class NSString;
@protocol FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing;

#import <Foundation/Foundation.h>


@interface FCPseudoOperation : NSObject <FCOperationCanceling, FCOperationIdentifying, FCOperationPrioritizing>



@property (copy, nonatomic) id *cancelBlock; // ivar: _cancelBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *longOperationDescription; // ivar: _longOperationDescription
@property (copy, nonatomic) id *priorityBlock; // ivar: _priorityBlock
@property (nonatomic) NSInteger relativePriority; // ivar: _relativePriority
@property (copy, nonatomic) NSString *shortOperationDescription; // ivar: _shortOperationDescription
@property (readonly) Class superclass;


-(id)init;
// -(id)initWithCancelBlock:(id)arg0 priorityBlock:(unk)arg1  ;
// -(id)initWithCancelBlock:(id)arg0 priorityBlock:(unk)arg1 shortDescription:(id)arg2 longDescription:(unk)arg3  ;
-(void)cancel;


@end


#endif