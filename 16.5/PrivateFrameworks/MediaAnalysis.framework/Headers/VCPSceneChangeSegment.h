// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPSCENECHANGESEGMENT_H
#define VCPSCENECHANGESEGMENT_H


#import <Foundation/Foundation.h>


@interface VCPSceneChangeSegment : NSObject

@property (readonly, nonatomic) NSUInteger numOfFrames; // ivar: _numOfFrames
@property (readonly, nonatomic) ? timeRange; // ivar: _timeRange


-(id)init;
-(void)finalizeAtTime:(struct ? )arg0 ;
-(void)mergeSegment:(id)arg0 ;
-(void)resetSegment:(struct ? )arg0 ;
-(void)updateSegment:(struct ? )arg0 ;


@end


#endif