// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWVIDEODEPTHINFERENCEADAPTER_H
#define BWVIDEODEPTHINFERENCEADAPTER_H


#import <Foundation/Foundation.h>


@interface BWVideoDepthInferenceAdapter : NSObject



+(void)initialize;
-(id)inferenceProvidersForType:(int)arg0 version:(struct ? )arg1 configuration:(id)arg2 resourceProvider:(id)arg3 status:(*int)arg4 ;
-(id)init;
-(void)dealloc;


@end


#endif