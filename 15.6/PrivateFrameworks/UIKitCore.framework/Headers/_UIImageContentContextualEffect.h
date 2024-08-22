// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIIMAGECONTENTCONTEXTUALEFFECT_H
#define _UIIMAGECONTENTCONTEXTUALEFFECT_H

@protocol _UIImageContentEffect, _UIImageContentLayoutSource;

#import <Foundation/Foundation.h>

#import "UIImageSymbolConfiguration.h"

@interface _UIImageContentContextualEffect : NSObject {
    UIImageSymbolConfiguration *_symbolConfiguration;
    id<_UIImageContentEffect> *_effect;
    id<_UIImageContentLayoutSource> *_source;
}






@end


#endif