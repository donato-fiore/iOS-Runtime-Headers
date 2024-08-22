// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCOLLECTIONFETCHOPERATION_H
#define PXCOLLECTIONFETCHOPERATION_H

@class NSOperation, PHCollection, PHFetchOptions, PHFetchResult;
@protocol PXCollectionFetchOperationDelegate;



@interface PXCollectionFetchOperation : NSOperation

@property (readonly, nonatomic) PHCollection *collection; // ivar: _collection
@property (weak, nonatomic) NSObject<PXCollectionFetchOperationDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PHFetchOptions *fetchOptions; // ivar: _fetchOptions
@property (retain, nonatomic) PHFetchResult *outputFetchResult; // ivar: _outputFetchResult


+(id)fetchOperationWithCollection:(id)arg0 delegate:(id)arg1 ;
-(id)init;
-(id)initWithCollection:(id)arg0 ;
-(void)handleBegin;
-(void)handleFinish;
-(void)main;


@end


#endif