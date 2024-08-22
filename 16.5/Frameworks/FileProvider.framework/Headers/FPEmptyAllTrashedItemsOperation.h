// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPEMPTYALLTRASHEDITEMSOPERATION_H
#define FPEMPTYALLTRASHEDITEMSOPERATION_H

@class NSString;
@protocol FPItemCollectionDelegate;


#import "FPActionOperation.h"

@interface FPEmptyAllTrashedItemsOperation : FPActionOperation <FPItemCollectionDelegate>

 {
    BOOL _gatheredItems;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)actionMain;
-(void)collection:(id)arg0 didDeleteItemsAtIndexPaths:(id)arg1 ;
-(void)collection:(id)arg0 didInsertItemsAtIndexPaths:(id)arg1 ;
-(void)collection:(id)arg0 didMoveItemsFromIndexPaths:(id)arg1 toIndexPaths:(id)arg2 ;
-(void)collection:(id)arg0 didPerformBatchUpdateWithReplayBlock:(id)arg1 ;
-(void)collection:(id)arg0 didUpdateItemsAtIndexPaths:(id)arg1 changes:(id)arg2 ;
-(void)dataForCollectionShouldBeReloaded:(id)arg0 ;


@end


#endif