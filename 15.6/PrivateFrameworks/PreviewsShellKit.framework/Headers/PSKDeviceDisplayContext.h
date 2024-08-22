// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSKDEVICEDISPLAYCONTEXT_H
#define PSKDEVICEDISPLAYCONTEXT_H

@class UISDeviceContext, UISDisplayContext;

#import <Foundation/Foundation.h>


@interface PSKDeviceDisplayContext : NSObject

@property (readonly, nonatomic) UISDeviceContext *deviceContext; // ivar: _deviceContext
@property (readonly, nonatomic) UISDisplayContext *displayContext; // ivar: _displayContext


-(id)initWithDeviceContext:(id)arg0 displayContext:(id)arg1 ;


@end


#endif