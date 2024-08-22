// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIDESRESULTPACKAGER_H
#define HMIDESRESULTPACKAGER_H

@class HMFObject;



@interface HMIDESResultPackager : HMFObject



+(id)logCategory;
+(id)packageTrainingResult:(id)arg0 privatize:(BOOL)arg1 maxNorm:(CGFloat)arg2 normBinCount:(NSUInteger)arg3 encryptionKey:(id)arg4 error:(*id)arg5 ;


@end


#endif