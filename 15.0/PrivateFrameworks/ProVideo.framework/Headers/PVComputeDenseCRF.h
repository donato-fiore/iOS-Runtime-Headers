// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PVCOMPUTEDENSECRF_H
#define PVCOMPUTEDENSECRF_H


#import <Foundation/Foundation.h>

#import "PVImageBuffer.h"

@interface PVComputeDenseCRF : NSObject {
    PVImageBuffer *_color;
    PVImageBuffer *_proxy;
}




-(id)initWithColor:(id)arg0 proximity:(id)arg1 ;
-(void)generateMatte:(id)arg0 ;


@end


#endif