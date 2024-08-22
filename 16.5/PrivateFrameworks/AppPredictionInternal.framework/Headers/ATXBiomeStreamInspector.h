// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXBIOMESTREAMINSPECTOR_H
#define ATXBIOMESTREAMINSPECTOR_H


#import <Foundation/Foundation.h>


@interface ATXBiomeStreamInspector : NSObject



+(void)_makeStreamJSONForStream:(id)arg0 publisher:(id)arg1 maxNumEvents:(NSUInteger)arg2 callback:(id)arg3 ;
+(void)makeJSONRepresentationForStreamWithBlock:(id)arg0 ;
// +(void)makeJSONRepresentationForStreamWithBlock:(id)arg0 blendingPublisher:(unk)arg1 clientPublisher:(id)arg2 uiPublisher:(id)arg3 appLaunchPublisher:(id)arg4 appIntentPublisher:(id)arg5 inferredModePublisher:(id)arg6  ;


@end


#endif