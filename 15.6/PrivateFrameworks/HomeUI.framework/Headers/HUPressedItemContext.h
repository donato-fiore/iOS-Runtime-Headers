// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUPRESSEDITEMCONTEXT_H
#define HUPRESSEDITEMCONTEXT_H

@class HFItem, NSTimer;

#import <Foundation/Foundation.h>

#import "HUElasticApplier.h"

@interface HUPressedItemContext : NSObject

@property (nonatomic, getter=isActive) BOOL active; // ivar: _active
@property (retain, nonatomic) HUElasticApplier *applier; // ivar: _applier
@property (nonatomic) CGFloat beginTime; // ivar: _beginTime
@property (nonatomic) CGFloat currentViewScale; // ivar: _currentViewScale
@property (nonatomic) BOOL isUserInitiated; // ivar: _isUserInitiated
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) NSTimer *programmaticBounceTimer; // ivar: _programmaticBounceTimer
@property (nonatomic) CGFloat rawInputProgress; // ivar: _rawInputProgress




@end


#endif