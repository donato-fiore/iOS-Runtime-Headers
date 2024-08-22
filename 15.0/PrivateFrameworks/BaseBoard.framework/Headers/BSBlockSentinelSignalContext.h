// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BSBLOCKSENTINELSIGNALCONTEXT_H
#define BSBLOCKSENTINELSIGNALCONTEXT_H

@class NSString;
@protocol BSBlockSentinelSignalContext;

#import <Foundation/Foundation.h>


@interface BSBlockSentinelSignalContext : NSObject <BSBlockSentinelSignalContext>



@property (readonly, nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (readonly, nonatomic) id *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFailed) BOOL failed; // ivar: _failed
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;




@end


#endif