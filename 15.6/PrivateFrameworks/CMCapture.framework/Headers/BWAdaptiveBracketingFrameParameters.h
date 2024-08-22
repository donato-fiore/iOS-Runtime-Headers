// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWADAPTIVEBRACKETINGFRAMEPARAMETERS_H
#define BWADAPTIVEBRACKETINGFRAMEPARAMETERS_H


#import <Foundation/Foundation.h>


@interface BWAdaptiveBracketingFrameParameters : NSObject {
    int _integrationTimeInMicroseconds;
    float _gain;
    int _maxAGC;
}


@property (readonly, nonatomic) float gain;
@property (readonly, nonatomic) int integrationTimeInMiroseconds;
@property (readonly, nonatomic) CGFloat integrationTimeInSeconds;
@property (readonly, nonatomic) int maxAGC;


+(id)frameParametersWithIntegrationTimeInMicroseconds:(int)arg0 gain:(float)arg1 maxAGC:(int)arg2 ;
+(id)frameParametersWithIntegrationTimeInSeconds:(CGFloat)arg0 gain:(float)arg1 maxAGC:(int)arg2 ;
-(id)initWithIntegrationTimeInMicroseconds:(int)arg0 gain:(float)arg1 maxAGC:(int)arg2 ;


@end


#endif