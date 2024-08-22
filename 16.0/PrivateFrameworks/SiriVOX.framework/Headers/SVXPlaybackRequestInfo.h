// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXPLAYBACKREQUESTINFO_H
#define SVXPLAYBACKREQUESTINFO_H


#import <Foundation/Foundation.h>


@interface SVXPlaybackRequestInfo : NSObject

@property (nonatomic) BOOL didFinish; // ivar: _didFinish
@property (nonatomic) BOOL didStart; // ivar: _didStart
@property (nonatomic) CGFloat finish; // ivar: _finish
@property (nonatomic) CGFloat start; // ivar: _start


-(CGFloat)duration;


@end


#endif