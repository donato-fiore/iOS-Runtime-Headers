// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFLOCKER_H
#define _UIFLOCKER_H

@class NSMutableArray, NSArray;

#import <Foundation/Foundation.h>

#import "_UIDragBadge.h"
#import "UIView.h"
#import "_UIGroupCompletion.h"
#import "UITargetedPreview.h"

@interface _UIFlocker : NSObject

@property (retain, nonatomic) _UIDragBadge *badge; // ivar: _badge
@property (nonatomic) NSUInteger badgeValue; // ivar: _badgeValue
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (retain, nonatomic) NSMutableArray *ghostPortals; // ivar: _ghostPortals
@property (retain, nonatomic) _UIGroupCompletion *groupCompletion; // ivar: _groupCompletion
@property (nonatomic) BOOL isFlocked; // ivar: _isFlocked
@property (nonatomic) NSUInteger itemCount; // ivar: _itemCount
@property (retain, nonatomic) UITargetedPreview *primaryPlatterPreview; // ivar: _primaryPlatterPreview
@property (retain, nonatomic) NSArray *secondaryPlatterViews; // ivar: _secondaryPlatterViews
@property (nonatomic) NSUInteger settings; // ivar: _settings
@property (copy, nonatomic) id *unflockPreviewProvider; // ivar: _unflockPreviewProvider


-(id)_primaryPlatterView;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithContainerView:(id)arg0 ;
-(struct CGPoint )badgeLocationInView:(id)arg0 ;
-(void)_installGhostPortalForPreview:(id)arg0 ;
-(void)flock;
-(void)install;
-(void)unflock;
-(void)unflockToDrag:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif