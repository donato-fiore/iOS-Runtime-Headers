// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWSTILLIMAGECAPTUREDELEGATECALLBACKINFO_H
#define BWSTILLIMAGECAPTUREDELEGATECALLBACKINFO_H


#import <Foundation/Foundation.h>


@interface BWStillImageCaptureDelegateCallbackInfo : NSObject

@property (readonly, nonatomic) unsigned int flag; // ivar: _flag
@property (readonly, nonatomic) BOOL isPreBracketFrame; // ivar: _isPreBracketFrame
@property (readonly, nonatomic) ? pts; // ivar: _pts


-(id)initWithFlag:(unsigned int)arg0 ;
-(id)initWithFlag:(unsigned int)arg0 pts:(struct ? )arg1 isPreBracketFrame:(BOOL)arg2 ;


@end


#endif