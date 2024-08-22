// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ARKEYFRAMELIST_H
#define ARKEYFRAMELIST_H

@class NSString, NSSet;
@protocol ARResultData;

#import <Foundation/Foundation.h>


@interface ARKeyframeList : NSObject <ARResultData>

 {
    CGFloat _timestamp;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CV3DReconKeyframeList keyframeList; // ivar: _keyframeList
@property (retain) NSSet *removedAnchors; // ivar: _removedAnchors
@property (readonly) Class superclass;
@property (retain) NSSet *updatedAnchors; // ivar: _updatedAnchors


-(CGFloat)timestamp;
-(void)dealloc;


@end


#endif