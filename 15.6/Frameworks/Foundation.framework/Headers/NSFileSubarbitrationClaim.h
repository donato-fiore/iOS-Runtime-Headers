// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILESUBARBITRATIONCLAIM_H
#define NSFILESUBARBITRATIONCLAIM_H

@class NSArray, NSMutableSet, NSMutableDictionary;


#import "NSFileAccessClaim.h"
#import "NSFileAccessNode.h"
#import "NSXPCConnection.h"

@interface NSFileSubarbitrationClaim : NSFileAccessClaim {
    NSArray *_readingURLs;
    NSUInteger _readingOptions;
    NSArray *_writingURLs;
    NSUInteger _writingOptions;
    NSArray *_readingLocations;
    NSArray *_writingLocations;
    NSFileAccessNode *_rootNode;
    NSMutableSet *_forwardedClaimIDs;
    NSMutableDictionary *_readRelinquishmentsByPresenterID;
    NSMutableDictionary *_writeRelinquishmentsByPresenterID;
}


@property (readonly) BOOL nullified; // ivar: _nullified
@property (retain) NSXPCConnection *subarbiterConnection; // ivar: _subarbiterConnection


+(BOOL)supportsSecureCoding;
-(BOOL)evaluateSelfWithRootNode:(id)arg0 checkSubarbitrability:(BOOL)arg1 ;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(id)descriptionWithIndenting:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithReadingURLs:(id)arg0 options:(NSUInteger)arg1 writingURLs:(id)arg2 options:(NSUInteger)arg3 claimer:(id)arg4 ;
-(id)relinquishmentForWrite:(BOOL)arg0 toPresenterForID:(id)arg1 ;
-(void)dealloc;
-(void)devalueOldClaim:(id)arg0 ;
-(void)devalueSelf;
-(void)encodeWithCoder:(id)arg0 ;
-(void)evaluateNewClaim:(id)arg0 ;
-(void)forwardReacquisitionForWritingClaim:(BOOL)arg0 withID:(id)arg1 toPresenterForID:(id)arg2 usingReplySender:(id)arg3 ;
-(void)forwardRelinquishmentForWritingClaim:(BOOL)arg0 withID:(id)arg1 options:(NSUInteger)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 toPresenter:(id)arg5 usingReplySender:(id)arg6 ;
-(void)forwardUsingConnection:(id)arg0 crashHandler:(id)arg1 ;
-(void)forwardUsingConnection:(id)arg0 withServer:(id)arg1 crashHandler:(id)arg2 ;
-(void)granted;
-(void)invokeClaimer;
-(void)itemAtLocation:(id)arg0 wasReplacedByItemAtLocation:(id)arg1 ;
-(void)revoked;


@end


#endif