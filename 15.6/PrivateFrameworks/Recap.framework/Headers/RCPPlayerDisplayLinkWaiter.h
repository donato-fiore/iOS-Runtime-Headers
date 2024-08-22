// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCPPLAYERDISPLAYLINKWAITER_H
#define RCPPLAYERDISPLAYLINKWAITER_H


#import <Foundation/Foundation.h>

#import "RCPPlayerPlaybackOptions.h"

@interface RCPPlayerDisplayLinkWaiter : NSObject

@property (nonatomic) NSInteger linkCallbackCount; // ivar: _linkCallbackCount
@property (retain, nonatomic) RCPPlayerPlaybackOptions *options; // ivar: _options


-(void)displayLinkFired:(id)arg0 ;
-(void)waitWithOptions:(id)arg0 ;


@end


#endif