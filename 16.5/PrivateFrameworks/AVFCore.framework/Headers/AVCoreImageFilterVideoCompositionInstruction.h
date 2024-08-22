// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCOREIMAGEFILTERVIDEOCOMPOSITIONINSTRUCTION_H
#define AVCOREIMAGEFILTERVIDEOCOMPOSITIONINSTRUCTION_H

@class NSString, NSArray;
@protocol AVVideoCompositionInstruction;

#import <Foundation/Foundation.h>


@interface AVCoreImageFilterVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction>



@property (readonly, nonatomic) BOOL containsTweening;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL enablePostProcessing;
@property (readonly, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int passthroughTrackID;
@property (readonly, nonatomic) NSArray *requiredSourceSampleDataTrackIDs;
@property (readonly, nonatomic) NSArray *requiredSourceTrackIDs; // ivar: _requiredSourceTrackIDs
@property (nonatomic) CGAffineTransform sourceTrackPreferredTransform; // ivar: _sourceTrackPreferredTransform
@property (readonly) Class superclass;
@property (readonly, nonatomic) ? timeRange; // ivar: _timeRange


-(id)init;
-(id)initWithTimeRange:(struct ? )arg0 sourceTrackIDs:(id)arg1 handler:(id)arg2 ;
-(void)dealloc;


@end


#endif