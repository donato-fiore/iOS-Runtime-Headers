// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPCNNESPRESSOCONTEXT_H
#define VCPCNNESPRESSOCONTEXT_H


#import <Foundation/Foundation.h>


@interface VCPCNNEspressoContext : NSObject

@property (readonly, nonatomic) *void espressoContext; // ivar: _espressoContext


+(*void)createContextPreferred;
+(*void)createContextWithForceCPU;
+(*void)createContextWithMPSGraph;
+(*void)sharedContextPreferred:(BOOL)arg0 ;
+(*void)sharedContextWithForceCPU:(BOOL)arg0 ;
+(*void)sharedContextWithMPSGraph:(BOOL)arg0 ;
+(BOOL)supportGPU;
-(id)initWithForceCPU:(BOOL)arg0 forceNNGraph:(BOOL)arg1 shared:(BOOL)arg2 ;
-(void)dealloc;


@end


#endif