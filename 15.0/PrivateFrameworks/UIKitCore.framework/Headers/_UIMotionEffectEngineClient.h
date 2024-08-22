// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIMOTIONEFFECTENGINECLIENT_H
#define _UIMOTIONEFFECTENGINECLIENT_H


#import <Foundation/Foundation.h>

#import "UIMotionEffect.h"
#import "UIView.h"

@interface _UIMotionEffectEngineClient : NSObject {
    UIMotionEffect *_effect;
    UIView *_view;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMotionEffect:(id)arg0 view:(id)arg1 ;


@end


#endif