// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICAVCONTENTKEYSESSIONREUSABLE_H
#define ICAVCONTENTKEYSESSIONREUSABLE_H

@class AVContentKeySession, NSString, NSMutableSet;

#import <Foundation/Foundation.h>


@interface ICAVContentKeySessionReusable : NSObject

@property (retain, nonatomic) AVContentKeySession *avContentKeySession; // ivar: _avContentKeySession
@property (nonatomic) NSInteger batchNumber; // ivar: _batchNumber
@property (nonatomic) BOOL hasFailedKeys; // ivar: _hasFailedKeys
@property (nonatomic) BOOL hasPrefetchKey; // ivar: _hasPrefetchKey
@property (readonly, nonatomic) BOOL isReusable;
@property (nonatomic) NSInteger pendingKeyRequestCount; // ivar: _pendingKeyRequestCount
@property (retain, nonatomic) NSString *reuseIdentifier; // ivar: _reuseIdentifier
@property (nonatomic) NSInteger useCount; // ivar: _useCount
@property (retain, nonatomic) NSMutableSet *usedTokens; // ivar: _usedTokens


-(BOOL)usableWithReuseIdentifier:(id)arg0 nonreusableTokens:(id)arg1 ;
-(id)description;
-(id)initWithReuseIdentifier:(id)arg0 batchNumber:(NSInteger)arg1 nonreusableTokens:(id)arg2 ;
-(void)cleanupForReuse;
-(void)contentKeyRequestDidFail;
-(void)contentKeyRequestDidSucceed:(BOOL)arg0 ;
-(void)didProvideContentKeyRequest;
-(void)prepareForReuseWithNonreusableTokens:(id)arg0 ;


@end


#endif