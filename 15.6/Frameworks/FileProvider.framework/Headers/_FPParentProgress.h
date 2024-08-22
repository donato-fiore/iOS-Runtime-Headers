// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _FPPARENTPROGRESS_H
#define _FPPARENTPROGRESS_H

@class NSProgress;


#import "FPProgressProxy.h"

@interface _FPParentProgress : NSProgress

@property (readonly) FPProgressProxy *progressProxy; // ivar: _progressProxy


-(void)dealloc;


@end


#endif