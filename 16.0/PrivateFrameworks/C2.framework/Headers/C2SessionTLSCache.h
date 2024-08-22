// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef C2SESSIONTLSCACHE_H
#define C2SESSIONTLSCACHE_H

@class NSString;
@protocol C2SessionDelegate;

#import <Foundation/Foundation.h>

#import "C2Session.h"

@interface C2SessionTLSCache : NSObject <C2SessionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) C2Session *pinnedSession; // ivar: _pinnedSession
@property (readonly) Class superclass;
@property (retain, nonatomic) C2Session *unpinnedSession; // ivar: _unpinnedSession


-(id)_createSessionWithTLSPinning:(BOOL)arg0 ;
-(id)init;
-(id)sessionForOptions:(id)arg0 ;
-(id)underlyingDelegateQueue;
-(void)C2Session:(id)arg0 didBecomeInvalidWithError:(id)arg1 ;
-(void)C2Session:(id)arg0 originalHost:(id)arg1 updatedRoute:(id)arg2 ;


@end


#endif