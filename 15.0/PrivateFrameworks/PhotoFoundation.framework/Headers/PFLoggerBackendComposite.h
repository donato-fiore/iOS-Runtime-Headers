// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFLOGGERBACKENDCOMPOSITE_H
#define PFLOGGERBACKENDCOMPOSITE_H

@class NSArray;


#import "PFLoggerBackendAdapter.h"

@interface PFLoggerBackendComposite : PFLoggerBackendAdapter

@property BOOL allBackendsAllowConcurrentAccess; // ivar: _allBackendsAllowConcurrentAccess
@property (retain) NSArray *backends; // ivar: _backends


-(BOOL)allowsConcurrentAccess;
-(id)initWithBackends:(id)arg0 ;
-(void)flushWithCompletionHandler:(id)arg0 ;
-(void)logFromCodeLocation:(struct ? )arg0 facility:(id)arg1 subsystem:(id)arg2 level:(int)arg3 message:(id)arg4 format:(id)arg5 args:(char *)arg6 ;


@end


#endif