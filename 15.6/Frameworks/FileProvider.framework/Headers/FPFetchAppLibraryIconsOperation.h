// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPFETCHAPPLIBRARYICONSOPERATION_H
#define FPFETCHAPPLIBRARYICONSOPERATION_H

@class NSDictionary;
@protocol FPOperationClient, FPOperationProgressDelegate;


#import "FPOperation.h"

@interface FPFetchAppLibraryIconsOperation : FPOperation <FPOperationClient>

 {
    NSDictionary *_itemIdentifierByAppBundleID;
    CGSize _desiredSize;
    CGFloat _screenScale;
}


@property (weak, nonatomic) NSObject<FPOperationProgressDelegate> *delegate; // ivar: _delegate


-(id)initWithAppLibraryItems:(id)arg0 desiredSize:(struct CGSize )arg1 screenScale:(CGFloat)arg2 ;
-(void)main;
-(void)operationDidProgressWithInfo:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif