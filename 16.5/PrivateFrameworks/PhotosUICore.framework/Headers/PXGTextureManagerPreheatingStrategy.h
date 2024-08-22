// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXGTEXTUREMANAGERPREHEATINGSTRATEGY_H
#define PXGTEXTUREMANAGERPREHEATINGSTRATEGY_H


#import <Foundation/Foundation.h>


@interface PXGTextureManagerPreheatingStrategy : NSObject {
    NSInteger _previousRegime;
}


@property (nonatomic) CGFloat fastOffset; // ivar: _fastOffset
@property (readonly, nonatomic) CGFloat maxPreheatingDistance;
@property (nonatomic) CGFloat mediumOffset; // ivar: _mediumOffset
@property (nonatomic) CGFloat slowOffset; // ivar: _slowOffset
@property (nonatomic) CGFloat stoppedOffset; // ivar: _stoppedOffset


+(id)defaultPreheatingStrategy;
+(id)lowMemoryPreheatingStrategy;
+(id)noPreheatingStrategy;
-(struct CGRect )preheatingRectForLayout:(id)arg0 interactionState:(struct ? )arg1 ;


@end


#endif