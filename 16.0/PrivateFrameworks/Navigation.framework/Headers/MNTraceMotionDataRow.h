// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNTRACEMOTIONDATAROW_H
#define MNTRACEMOTIONDATAROW_H

@class NSString;
@protocol MNTracePlayerTimelineStreamObjectType;

#import <Foundation/Foundation.h>


@interface MNTraceMotionDataRow : NSObject <MNTracePlayerTimelineStreamObjectType>



@property (nonatomic) NSUInteger confidence; // ivar: _confidence
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSUInteger exitType; // ivar: _exitType
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger motionType; // ivar: _motionType
@property (readonly, nonatomic) CGFloat position;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp




@end


#endif