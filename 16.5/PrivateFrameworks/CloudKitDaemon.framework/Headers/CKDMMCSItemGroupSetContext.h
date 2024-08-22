// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDMMCSITEMGROUPSETCONTEXT_H
#define CKDMMCSITEMGROUPSETCONTEXT_H

@class NSMutableArray;
@protocol CKDCancelling, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "CKDMMCSItemGroupSet.h"
#import "CKDOperation.h"

@interface CKDMMCSItemGroupSetContext : NSObject <CKDCancelling>



@property (copy, nonatomic) id *itemGroupCompletionBlock; // ivar: _itemGroupCompletionBlock
@property (retain, nonatomic) NSMutableArray *itemGroupContexts; // ivar: _itemGroupContexts
@property (retain, nonatomic) CKDMMCSItemGroupSet *itemGroupSet; // ivar: _itemGroupSet
@property (copy, nonatomic) id *itemGroupSetCompletionBlock; // ivar: _itemGroupSetCompletionBlock
@property (retain, nonatomic) NSObject<OS_dispatch_group> *itemGroupSetCompletionGroup; // ivar: _itemGroupSetCompletionGroup
@property (nonatomic) NSInteger mmcsOperationType; // ivar: _mmcsOperationType
@property (weak, nonatomic) CKDOperation *operation; // ivar: _operation


-(id)initWithItemGroupSet:(id)arg0 itemGroupSetCompletionBlock:(id)arg1 ;
-(void)addItemGroupContext:(id)arg0 ;
-(void)cancel;
-(void)start;


@end


#endif