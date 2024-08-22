// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ARCOACHINGCONTROLPOINTCONTAINER_H
#define ARCOACHINGCONTROLPOINTCONTAINER_H


#import <Foundation/Foundation.h>


@interface ARCoachingControlPointContainer : NSObject {
    vector<ARCoachingControlPoint, std::allocator<ARCoachingControlPoint>> _controlPoints;
}


@property (readonly, nonatomic) *? controlPoints;
@property (readonly, nonatomic) unsigned int numControlPoints;


-(id)initWithControlPoints:(struct ? *)arg0 numControlPoints:(int)arg1 ;
-(void)overwriteWithControlPoints:(struct ? *)arg0 numControlPoints:(int)arg1 ;


@end


#endif