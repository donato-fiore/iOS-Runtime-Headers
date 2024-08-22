// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCCROSSFADEPARAMETERS_H
#define MPCCROSSFADEPARAMETERS_H

@protocol MFCrossFadeParameters;

#import <Foundation/Foundation.h>


@interface MPCCrossFadeParameters : NSObject <MFCrossFadeParameters>



@property (readonly, nonatomic) CGFloat duration; // ivar: _duration


-(id)initWithDuration:(CGFloat)arg0 ;


@end


#endif