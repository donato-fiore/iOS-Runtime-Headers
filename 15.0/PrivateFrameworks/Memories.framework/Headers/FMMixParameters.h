// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMMIXPARAMETERS_H
#define FMMIXPARAMETERS_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FMMixParameters : NSObject

@property (retain, nonatomic) NSArray *volumeKeyFrames; // ivar: _volumeKeyFrames


-(BOOL)appendVolumeKeyframe:(id)arg0 ;
-(BOOL)removeRedundantVolumeKeyFrames;
-(BOOL)volumeKeyframesAreValid;
-(float)volumeValueAtTime:(NSInteger)arg0 ;
-(id)description;
-(id)init;
-(id)lastVolumeKeyFrame;
-(void)insertVolumeKeyframe:(id)arg0 ;


@end


#endif