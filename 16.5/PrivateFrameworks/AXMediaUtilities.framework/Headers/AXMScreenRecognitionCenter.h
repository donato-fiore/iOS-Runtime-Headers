// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMSCREENRECOGNITIONCENTER_H
#define AXMSCREENRECOGNITIONCENTER_H


#import <Foundation/Foundation.h>


@interface AXMScreenRecognitionCenter : NSObject



+(id)sharedInstance;
-(id)_processVisionResult:(id)arg0 options:(id)arg1 coagulator:(id)arg2 ;
-(struct ? )processFeatures:(id)arg0 ;


@end


#endif