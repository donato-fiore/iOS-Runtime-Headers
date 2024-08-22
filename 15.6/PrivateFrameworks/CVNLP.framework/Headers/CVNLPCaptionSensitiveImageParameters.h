// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CVNLPCAPTIONSENSITIVEIMAGEPARAMETERS_H
#define CVNLPCAPTIONSENSITIVEIMAGEPARAMETERS_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CVNLPCaptionSensitiveImageParameters : NSObject

@property (readonly, nonatomic) NSArray *blockingTokens; // ivar: _blockingTokens
@property (readonly, nonatomic) CGFloat minConfidence; // ivar: _minConfidence
@property (readonly, nonatomic) NSString *visionIdentifier; // ivar: _visionIdentifier


-(id)initWithVisionIdentifier:(id)arg0 minConfidence:(CGFloat)arg1 commonBlockingTokens:(id)arg2 categoryBlockingTokens:(id)arg3 categoryBlockingTokensAnnex:(id)arg4 ;


@end


#endif