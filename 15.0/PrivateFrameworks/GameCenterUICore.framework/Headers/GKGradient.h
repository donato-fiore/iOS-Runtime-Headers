// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKGRADIENT_H
#define GKGRADIENT_H


#import <Foundation/Foundation.h>


@interface GKGradient : NSObject {
    *CGGradient _CGGradient;
}




+(id)gradientWithColors:(id)arg0 atLocations:(*CGFloat)arg1 ;
-(id)initWithColors:(id)arg0 atLocations:(*CGFloat)arg1 ;
-(struct CGGradient *)CGGradient;
-(void)dealloc;


@end


#endif