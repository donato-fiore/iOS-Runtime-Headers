// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASVCONTROLPOINTCONTAINER_H
#define ASVCONTROLPOINTCONTAINER_H


#import <Foundation/Foundation.h>


@interface ASVControlPointContainer : NSObject {
    vector<ASVControlPoint, std::allocator<ASVControlPoint>> _controlPoints;
}


@property (readonly, nonatomic) *? controlPoints;
@property (readonly, nonatomic) unsigned int numControlPoints;


-(id)initWithControlPoints:(struct ? *)arg0 numControlPoints:(int)arg1 ;
-(void)overwriteWithControlPoints:(struct ? *)arg0 numControlPoints:(int)arg1 ;


@end


#endif