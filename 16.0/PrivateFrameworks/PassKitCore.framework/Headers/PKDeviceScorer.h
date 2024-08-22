// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDEVICESCORER_H
#define PKDEVICESCORER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "CdQwUTvJnDEPQgR8.h"
#import "PKDSPContext.h"

@interface PKDeviceScorer : NSObject {
    CdQwUTvJnDEPQgR8 *_scorer;
    NSMutableDictionary *_scoreCompletions;
}


@property (readonly, copy, nonatomic) PKDSPContext *context; // ivar: _context
@property (nonatomic) CGFloat deviceScoreTimeout; // ivar: _deviceScoreTimeout


+(BOOL)deviceScoringSupported;
-(id)_createScorer;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(void)_getScoreWithNonce:(id)arg0 cryptogram:(id)arg1 challengeResponse:(id)arg2 completion:(id)arg3 ;
-(void)deviceScoreWithCryptogram:(id)arg0 challengeResponse:(id)arg1 nonce:(id)arg2 completion:(id)arg3 ;
-(void)peerPaymentDeviceScoreWithCryptogram:(id)arg0 challengeResponse:(id)arg1 completion:(id)arg2 ;


@end


#endif