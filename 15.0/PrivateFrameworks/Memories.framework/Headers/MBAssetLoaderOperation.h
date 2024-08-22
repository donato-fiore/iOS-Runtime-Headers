// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MBASSETLOADEROPERATION_H
#define MBASSETLOADEROPERATION_H

@class NSOperation, AVAsset, NSURL, NSArray;



@interface MBAssetLoaderOperation : NSOperation

@property (retain, nonatomic) AVAsset *asset; // ivar: _asset
@property (getter=isExecuting) BOOL executing; // ivar: executing
@property (getter=isFinished) BOOL finished; // ivar: finished
@property (retain, nonatomic) NSURL *identifierURL; // ivar: _identifierURL
@property (copy, nonatomic) id *preCompletionBlock; // ivar: _preCompletionBlock
@property (retain, nonatomic) NSArray *prefetchKeys; // ivar: _prefetchKeys


-(BOOL)isConcurrent;
-(id)initWithIdentifierURL:(id)arg0 ;
-(void)finish;
-(void)start;


@end


#endif