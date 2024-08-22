// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFUNIFIEDBARITEM_H
#define SFUNIFIEDBARITEM_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SFUnifiedBarItemView.h"
#import "SFUnifiedBarItem.h"

@interface SFUnifiedBarItem : NSObject

@property (nonatomic) NSInteger activeAnimationCount; // ivar: _activeAnimationCount
@property (readonly, nonatomic, getter=isDragging) BOOL dragging;
@property (readonly, nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (nonatomic) BOOL isPlaceholder; // ivar: _isPlaceholder
@property (nonatomic, getter=isPinned) BOOL pinned; // ivar: _pinned
@property (retain, nonatomic) SFUnifiedBarItemView *reusablePreviewView; // ivar: _reusablePreviewView
@property (retain, nonatomic) SFUnifiedBarItemView *reusableView; // ivar: _reusableView
@property (readonly, nonatomic) SFUnifiedBarItem *secondaryItem;
@property (nonatomic) NSUInteger spacingOptions; // ivar: _spacingOptions
@property (readonly, nonatomic) SFUnifiedBarItemView *view;
@property (copy, nonatomic) NSString *viewReuseIdentifier; // ivar: _viewReuseIdentifier


-(id)menuElementRepresentationWithSelectionHandler:(id)arg0 ;
-(void)configureItemView:(id)arg0 isPreview:(BOOL)arg1 ;


@end


#endif