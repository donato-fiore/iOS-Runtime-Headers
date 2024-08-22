// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEMULTIPLEACCESSCLAIM_H
#define NSFILEMULTIPLEACCESSCLAIM_H

@class NSMutableArray;


#import "NSFileAccessClaim.h"
#import "NSFileAccessNode.h"

@interface NSFileMultipleAccessClaim : NSFileAccessClaim {
    NSMutableArray *_readingURLs;
    *NSUInteger _readingOptions;
    *BOOL _readingURLsDidChange;
    NSMutableArray *_writingURLs;
    *NSUInteger _writingOptions;
    *BOOL _writingURLsDidChange;
    NSMutableArray *_readingLocations;
    NSMutableArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    NSUInteger _currentlyLinkResolvingURLIndex;
    NSInteger _readingLinkResolutionCount;
}




+(BOOL)supportsSecureCoding;
-(BOOL)blocksClaim:(id)arg0 ;
-(BOOL)evaluateSelfWithRootNode:(id)arg0 checkSubarbitrability:(BOOL)arg1 ;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)shouldBeRevokedPriorToInvokingAccessor;
-(BOOL)shouldCancelInsteadOfWaiting;
-(id)allURLs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurposeID:(id)arg0 intents:(id)arg1 claimer:(id)arg2 ;
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