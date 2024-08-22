// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWMOTIONDATAPRESERVER_H
#define BWMOTIONDATAPRESERVER_H

@class NSString, NSMutableData;

#import <Foundation/Foundation.h>


@interface BWMotionDataPreserver : NSObject {
    NSString *_name;
    NSMutableData *_preservedISPMotionData;
    NSUInteger _lengthOfInitialISPMotionData;
    int _sampleCountOfInitialISPMotionData;
    NSMutableData *_preservedISPHallData;
    NSUInteger _lengthOfInitialISPHallData;
    int _sampleCountOfInitialISPHallData;
    NSString *_currentISPHallPortType;
}




+(void)initialize;
-(BOOL)_preserveMotionDataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 willBeDropped:(BOOL)arg1 ;
-(BOOL)prependPreservedMotionDataToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(BOOL)preserveMotionDataForSoonToBeDroppedSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)dealloc;
-(void)reset;


@end


#endif