// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHCONTINUITYTRACKER_H
#define SHCONTINUITYTRACKER_H


#import <Foundation/Foundation.h>


@interface SHContinuityTracker : NSObject



+(NSInteger)mergePolicyToSignatureAlignmentMergeMode:(NSInteger)arg0 ;
+(id)trackQuerySignature:(id)arg0 inReferenceSignature:(id)arg1 error:(*id)arg2 ;
+(id)trackQuerySignature:(id)arg0 inReferenceSignature:(id)arg1 usingMergePolicy:(NSInteger)arg2 error:(*id)arg3 ;
+(id)trackedResultFromSignatureAlignment:(id)arg0 ;


@end


#endif