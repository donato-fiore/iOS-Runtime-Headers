// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARAUDIODATA_H
#define ARAUDIODATA_H

@class NSString;
@protocol ARSensorData;

#import <Foundation/Foundation.h>


@interface ARAudioData : NSObject <ARSensorData>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *opaqueCMSampleBuffer sampleBuffer; // ivar: _sampleBuffer
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)initWithSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;


@end


#endif