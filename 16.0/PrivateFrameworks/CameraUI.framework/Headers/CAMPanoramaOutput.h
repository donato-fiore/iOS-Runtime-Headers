// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMPANORAMAOUTPUT_H
#define CAMPANORAMAOUTPUT_H

@class AVCaptureVideoDataOutput;


#import "CAMCaptureEngine.h"

@interface CAMPanoramaOutput : AVCaptureVideoDataOutput

@property (readonly, weak, nonatomic) CAMCaptureEngine *_engine; // ivar: __engine
@property (readonly, nonatomic) NSInteger photoEncodingBehavior; // ivar: _photoEncodingBehavior


-(id)initWithEngine:(id)arg0 ;
-(void)changeToDirection:(NSInteger)arg0 ;
-(void)changeToEncodingBehavior:(NSInteger)arg0 ;


@end


#endif