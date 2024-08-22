// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMCOREMOTIONNODE_H
#define AXMCOREMOTIONNODE_H



#import "AXMSourceNode.h"

@interface AXMCoreMotionNode : AXMSourceNode

@property (nonatomic) CGFloat lastSampleTime; // ivar: _lastSampleTime
@property (nonatomic) NSUInteger samplesPerSecond; // ivar: _samplesPerSecond


+(BOOL)isSupported;
+(BOOL)supportsSecureCoding;
+(id)title;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)nodeInitialize;
-(void)triggerWithCoreMotionManager:(id)arg0 deviceOrientation:(NSInteger)arg1 cacheKey:(id)arg2 resultHandler:(id)arg3 ;


@end


#endif