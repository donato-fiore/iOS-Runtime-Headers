// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OZFXPRINCIPALDELEGATE_H
#define OZFXPRINCIPALDELEGATE_H

@protocol FxPlugPrincipalDelegate;

#import <Foundation/Foundation.h>


@interface OZFxPrincipalDelegate : NSObject <FxPlugPrincipalDelegate>

 {
    *void _plugin;
}




-(id)fxServiceProxy;
-(id)initWithPlugin:(*void)arg0 ;


@end


#endif