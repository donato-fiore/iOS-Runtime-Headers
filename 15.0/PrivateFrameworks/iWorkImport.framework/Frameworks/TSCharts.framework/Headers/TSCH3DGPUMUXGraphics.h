// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSCH3DGPUMUXGRAPHICS_H
#define TSCH3DGPUMUXGRAPHICS_H


#import <Foundation/Foundation.h>


@interface TSCH3DGPUMUXGraphics : NSObject {
    NSInteger _interestCount;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedInstance;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)addInterestForDiscreteGraphics;
-(void)removeInterestForDiscreteGraphics;


@end


#endif