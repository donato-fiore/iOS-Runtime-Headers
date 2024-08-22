// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CMCATHERINEFEEDER_H
#define CMCATHERINEFEEDER_H


#import <Foundation/Foundation.h>

#import "CMCatherineFeederInternal.h"

@interface CMCatherineFeeder : NSObject

@property (readonly, nonatomic) CMCatherineFeederInternal *internal; // ivar: _internal


-(id)init;
-(void)dealloc;
-(void)feedCatherine:(CGFloat)arg0 confidence:(CGFloat)arg1 ;


@end


#endif