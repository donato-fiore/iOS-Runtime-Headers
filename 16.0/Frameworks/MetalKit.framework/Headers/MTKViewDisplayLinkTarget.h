// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTKVIEWDISPLAYLINKTARGET_H
#define MTKVIEWDISPLAYLINKTARGET_H


#import <Foundation/Foundation.h>

#import "MTKView.h"

@interface MTKViewDisplayLinkTarget : NSObject

@property (weak, nonatomic) MTKView *target; // ivar: _target


-(id)initWithTarget:(id)arg0 ;
-(void)draw;


@end


#endif