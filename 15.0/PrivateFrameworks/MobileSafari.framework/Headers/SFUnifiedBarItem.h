// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFUNIFIEDBARITEM_H
#define SFUNIFIEDBARITEM_H


#import <Foundation/Foundation.h>

#import "SFUnifiedBarItemView.h"
#import "SFUnifiedBarItem.h"

@interface SFUnifiedBarItem : NSObject

@property (nonatomic) NSInteger activeAnimationCount; // ivar: _activeAnimationCount
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly, nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (retain, nonatomic) SFUnifiedBarItemView *reusableView; // ivar: _reusableView
@property (readonly, nonatomic) SFUnifiedBarItem *secondaryItem;
@property (nonatomic) NSUInteger spacingOptions; // ivar: _spacingOptions
@property (readonly, nonatomic) SFUnifiedBarItemView *view;




@end


#endif