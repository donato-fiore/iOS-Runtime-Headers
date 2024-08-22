// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKNOISESOURCE_H
#define GKNOISESOURCE_H


#import <Foundation/Foundation.h>


@interface GKNoiseSource : NSObject



-(CGFloat)valueAt;
-(id)cloneModule;
-(id)inputModuleAtIndex:(int)arg0 ;
-(int)requiredInputModuleCount;
-(void)setInputModule:(id)arg0 atIndex:(int)arg1 ;


@end


#endif