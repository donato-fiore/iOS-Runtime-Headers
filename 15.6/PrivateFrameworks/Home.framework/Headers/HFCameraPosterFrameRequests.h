// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFCAMERAPOSTERFRAMEREQUESTS_H
#define HFCAMERAPOSTERFRAMEREQUESTS_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HFCameraPosterFrameRequests : NSObject

@property (retain, nonatomic) NSMutableDictionary *generationRequests; // ivar: _generationRequests
@property (retain, nonatomic) NSMutableDictionary *timelapseRequests; // ivar: _timelapseRequests


-(id)fulfillAllRequestsForPosterFrameGenerationForHighQualityClip:(id)arg0 ;
-(id)fulfillRequestForPosterFrameGenerationForHighQualityClip:(id)arg0 atOffset:(CGFloat)arg1 ;
-(id)fulfillRequestsForTimelapseFileForTimelapseClip:(id)arg0 ;
-(id)init;
-(void)addRequestForTimelapseFileForDelegate:(id)arg0 forHighQualityClip:(id)arg1 andTimelapseClip:(id)arg2 atOffset:(CGFloat)arg3 ;
-(void)addRequestsForPosterFrameGeneration:(id)arg0 forHighQualityClip:(id)arg1 ;


@end


#endif