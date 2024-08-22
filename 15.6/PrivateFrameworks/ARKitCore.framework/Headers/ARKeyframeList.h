// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARKEYFRAMELIST_H
#define ARKEYFRAMELIST_H

@class NSString;
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
@property (readonly) Class superclass;


-(CGFloat)timestamp;
-(void)dealloc;


@end


#endif