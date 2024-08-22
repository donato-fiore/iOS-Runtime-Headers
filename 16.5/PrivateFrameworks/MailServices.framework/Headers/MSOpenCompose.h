// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSOPENCOMPOSE_H
#define MSOPENCOMPOSE_H



#import "MSXPCService.h"

@interface MSOpenCompose : MSXPCService



+(id)sharedInstance;
+(void)presentNewMailWithContext:(id)arg0 delegateEndpoint:(id)arg1 completion:(id)arg2 ;
-(id)init;


@end


#endif