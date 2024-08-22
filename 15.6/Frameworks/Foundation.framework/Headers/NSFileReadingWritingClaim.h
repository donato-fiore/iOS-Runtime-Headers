// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEREADINGWRITINGCLAIM_H
#define NSFILEREADINGWRITINGCLAIM_H

@class NSURL;


#import "NSFileAccessClaim.h"
#import "NSFileAccessNode.h"

@interface NSFileReadingWritingClaim : NSFileAccessClaim {
    NSURL *_readingURL;
    BOOL _readingURLDidChange;
    NSUInteger _readingOptions;
    NSURL *_writingURL;
    BOOL _writingURLDidChange;
    NSUInteger _writingOptions;
    NSFileAccessNode *_readingLocation;
    NSFileAccessNode *_writingLocation;
    NSFileAccessNode *_rootNode;
    NSInteger _readingLinkResolutionCount;
}




+(BOOL)supportsSecureCoding;
-(BOOL)blocksClaim:(id)arg0 ;
-(BOOL)evaluateSelfWithRootNode:(id)arg0 checkSubarbitrability:(BOOL)arg1 ;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)shouldCancelInsteadOfWaiting;
-(id)allURLs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurposeID:(id)arg0 readingURL:(id)arg1 options:(NSUInteger)arg2 writingURL:(id)arg3 options:(NSUInteger)arg4 claimer:(id)arg5 ;
-(void)dealloc;
-(void)devalueSelf;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forwardUsingConnection:(id)arg0 crashHandler:(id)arg1 ;
-(void)granted;
-(void)invokeClaimer;
-(void)itemAtLocation:(id)arg0 wasReplacedByItemAtLocation:(id)arg1 ;
-(void)protectFilesAgainstEviction;
-(void)resolveURLsThenMaybeContinueInvokingClaimer:(id)arg0 ;


@end


#endif