// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSFILEWRITINGCLAIM_H
#define NSFILEWRITINGCLAIM_H

@class NSURL;


#import "NSFileAccessClaim.h"
#import "NSFileAccessNode.h"

@interface NSFileWritingClaim : NSFileAccessClaim {
    NSURL *_url;
    BOOL _urlDidChange;
    NSUInteger _options;
    NSFileAccessNode *_location;
}




+(BOOL)supportsSecureCoding;
-(BOOL)blocksClaim:(id)arg0 ;
-(BOOL)evaluateSelfWithRootNode:(id)arg0 checkSubarbitrability:(BOOL)arg1 ;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg0 options:(NSUInteger)arg1 ;
-(id)allURLs;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPurposeID:(id)arg0 url:(id)arg1 options:(NSUInteger)arg2 claimer:(id)arg3 ;
-(void)dealloc;
-(void)devalueSelf;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forwardUsingConnection:(id)arg0 crashHandler:(id)arg1 ;
-(void)granted;
-(void)invokeClaimer;
-(void)itemAtLocation:(id)arg0 wasReplacedByItemAtLocation:(id)arg1 ;
-(void)protectFilesAgainstEviction;
-(void)resolveURLsThenContinueInvokingClaimer:(id)arg0 ;


@end


#endif