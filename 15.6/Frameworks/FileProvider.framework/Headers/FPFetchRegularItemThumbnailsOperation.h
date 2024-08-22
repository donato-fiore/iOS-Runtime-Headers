// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPFETCHREGULARITEMTHUMBNAILSOPERATION_H
#define FPFETCHREGULARITEMTHUMBNAILSOPERATION_H

@class NSArray;
@protocol FPOperationClient, FPOperationProgressDelegate;


#import "FPOperation.h"
#import "FPItemManager.h"

@interface FPFetchRegularItemThumbnailsOperation : FPOperation <FPOperationClient>

 {
    NSArray *_itemIDs;
    CGSize _desiredSizeToScale;
    FPItemManager *_itemManager;
}


@property (weak, nonatomic) NSObject<FPOperationProgressDelegate> *delegate; // ivar: _delegate


-(id)initWithRegularItems:(id)arg0 desiredSizeToScale:(struct CGSize )arg1 itemManager:(id)arg2 ;
-(void)main;
-(void)operationDidProgressWithInfo:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif