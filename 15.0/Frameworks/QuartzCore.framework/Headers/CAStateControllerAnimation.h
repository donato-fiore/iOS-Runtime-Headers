// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CASTATECONTROLLERANIMATION_H
#define CASTATECONTROLLERANIMATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CALayer.h"

@interface CAStateControllerAnimation : NSObject

@property (readonly, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer


-(id)initWithLayer:(id)arg0 key:(id)arg1 ;
-(void)dealloc;


@end


#endif