// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUQUICKCONTROLGROUPCONTEXT_H
#define HUQUICKCONTROLGROUPCONTEXT_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "HUQuickControlContext.h"

@interface HUQuickControlGroupContext : NSObject

@property (copy, nonatomic) NSSet *alternateQuickControlContexts; // ivar: _alternateQuickControlContexts
@property (copy, nonatomic) HUQuickControlContext *primaryQuickControlContext; // ivar: _primaryQuickControlContext


-(id)allControlItems;
-(id)initWithPrimaryQuickControlContext:(id)arg0 alternateQuickControlContexts:(id)arg1 ;


@end


#endif