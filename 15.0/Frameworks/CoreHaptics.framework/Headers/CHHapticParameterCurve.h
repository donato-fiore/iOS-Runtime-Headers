// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHHAPTICPARAMETERCURVE_H
#define CHHAPTICPARAMETERCURVE_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface CHHapticParameterCurve : NSObject {
    NSArray *_controlPoints;
}


@property (readonly) NSArray *controlPoints;
@property (readonly) NSString *parameterID; // ivar: _param
@property CGFloat relativeTime; // ivar: _time


-(id)init;
-(id)initWithParameterID:(id)arg0 controlPoints:(id)arg1 relativeTime:(CGFloat)arg2 ;


@end


#endif