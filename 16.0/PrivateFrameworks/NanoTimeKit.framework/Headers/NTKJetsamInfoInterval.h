// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKJETSAMINFOINTERVAL_H
#define NTKJETSAMINFOINTERVAL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "NTKJetsamInfoFetcher.h"

@interface NTKJetsamInfoInterval : NSObject {
    NTKJetsamInfoFetcher *_fetcher;
}


@property (readonly, nonatomic) jetsam_info currentInfo;
@property (readonly, nonatomic) NSString *label; // ivar: _label
@property (readonly, nonatomic) jetsam_info startInfo; // ivar: _startInfo


-(BOOL)waitUntilDirtyMemoryDrained;
-(BOOL)waitUntilDirtyMemoryReaches:(NSInteger)arg0 maxWaitMS:(int)arg1 ;
-(id)initWithLabel:(id)arg0 ;
-(void)logCurrentInterval;
-(void)reset;


@end


#endif