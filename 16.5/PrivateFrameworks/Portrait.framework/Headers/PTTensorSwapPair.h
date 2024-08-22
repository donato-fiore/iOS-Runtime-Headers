// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTTENSORSWAPPAIR_H
#define PTTENSORSWAPPAIR_H


#import <Foundation/Foundation.h>


@interface PTTensorSwapPair : NSObject {
    NSString" _names;
    ? _tensorPair;
}




-(id)initWithIOSurfaces:(struct __IOSurface **)arg0 names:(id)arg1 ;
-(id)tensorNameWithIndex:(int)arg0 ;
-(struct __CVBuffer *)tensorWithIndex:(int)arg0 ;
-(void)dealloc;


@end


#endif