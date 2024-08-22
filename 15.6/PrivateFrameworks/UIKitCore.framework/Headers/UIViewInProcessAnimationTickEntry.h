// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIVIEWINPROCESSANIMATIONTICKENTRY_H
#define UIVIEWINPROCESSANIMATIONTICKENTRY_H


#import <Foundation/Foundation.h>


@interface UIViewInProcessAnimationTickEntry : NSObject

@property (readonly, nonatomic) id *callback; // ivar: _callback
@property (readonly, nonatomic) CAFrameRateRange preferredFrameRateRange; // ivar: _preferredFrameRateRange
@property (readonly, nonatomic) unsigned int updateReason; // ivar: _updateReason
@property (readonly, nonatomic, getter=isvelocityUsableForVFD) BOOL velocityUsableForVFD; // ivar: _velocityUsableForVFD


-(id)initWithPreferredFrameRateRange:(struct CAFrameRateRange )arg0 updateReason:(unsigned int)arg1 velocityUsableForVFD:(BOOL)arg2 callback:(id)arg3 ;


@end


#endif