// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMBURSTSESSION_H
#define CAMBURSTSESSION_H

@class CIBurstImageSet, NSString;

#import <Foundation/Foundation.h>


@interface CAMBurstSession : NSObject

@property (readonly, nonatomic) CIBurstImageSet *_burstImageSet; // ivar: __burstImageSet
@property (nonatomic, setter=_setCount:) NSUInteger count; // ivar: _count
@property (nonatomic, setter=_setEstimatedCount:) NSUInteger estimatedCount; // ivar: _estimatedCount
@property (nonatomic, getter=_isFinalized, setter=_setFinalized:) BOOL finalized; // ivar: _finalized
@property (readonly, copy, nonatomic) NSString *identifier;


-(id)description;
-(id)init;
-(id)performBurstAnalysisForDevice:(NSInteger)arg0 ;
-(void)addStillImageCaptureResult:(id)arg0 ;
-(void)addStillImageLocalPersistenceResult:(id)arg0 withFaces:(id)arg1 ;


@end


#endif