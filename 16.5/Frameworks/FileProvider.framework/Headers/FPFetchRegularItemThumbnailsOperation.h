// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPFETCHREGULARITEMTHUMBNAILSOPERATION_H
#define FPFETCHREGULARITEMTHUMBNAILSOPERATION_H

@class NSDictionary;
@protocol FPOperationClient, FPOperationProgressDelegate;


#import "FPOperation.h"
#import "FPItemManager.h"

@interface FPFetchRegularItemThumbnailsOperation : FPOperation <FPOperationClient>

 {
    NSDictionary *_dictionary;
    CGSize _desiredSizeToScale;
    FPItemManager *_itemManager;
}


@property (weak, nonatomic) NSObject<FPOperationProgressDelegate> *delegate; // ivar: _delegate


-(id)initWithDictionary:(id)arg0 desiredSizeToScale:(struct CGSize )arg1 itemManager:(id)arg2 ;
-(void)main;
-(void)operationDidProgressWithInfo:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif