// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAUIMETALBADGERENDERERDISPLAYLINKTARGET_H
#define AAUIMETALBADGERENDERERDISPLAYLINKTARGET_H


#import <Foundation/Foundation.h>

#import "AAUIMetalBadgeRenderer.h"

@interface AAUIMetalBadgeRendererDisplayLinkTarget : NSObject

@property (weak, nonatomic) AAUIMetalBadgeRenderer *target; // ivar: _target


-(id)_initWithTarget:(id)arg0 ;
-(void)_drawBadgeFrameCallback;


@end


#endif