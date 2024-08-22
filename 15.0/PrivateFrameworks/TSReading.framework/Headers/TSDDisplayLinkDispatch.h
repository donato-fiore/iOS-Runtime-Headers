// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDDISPLAYLINKDISPATCH_H
#define TSDDISPLAYLINKDISPATCH_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "TSDDisplayLink.h"

@interface TSDDisplayLinkDispatch : NSObject {
    TSDDisplayLink *_displayLink;
    NSMutableArray *_blocks;
}




-(void)performBlockNextFrame:(id)arg0 ;
-(void)teardown;


@end


#endif