// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONBARCONTENTS_H
#define _UINAVIGATIONBARCONTENTS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "UIBarButtonItem.h"
#import "UINavigationItem.h"
#import "UIView.h"

@interface _UINavigationBarContents : NSObject

@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem; // ivar: _backBarButtonItem
@property (retain, nonatomic) UINavigationItem *backItem; // ivar: _backItem
@property (copy, nonatomic) NSArray *cancelBarButtonItems; // ivar: _cancelBarButtonItems
@property (retain, nonatomic) UIView *largeTitleView; // ivar: _largeTitleView
@property (copy, nonatomic) NSArray *otherBarButtonItems; // ivar: _otherBarButtonItems
@property (retain, nonatomic) UIView *promptView; // ivar: _promptView
@property (retain, nonatomic) UIBarButtonItem *staticBarButtonItem; // ivar: _staticBarButtonItem
@property (retain, nonatomic) UIView *titleView; // ivar: _titleView
@property (retain, nonatomic) UINavigationItem *topItem; // ivar: _topItem
@property (copy, nonatomic) NSArray *viewsRepresentingBackButton; // ivar: _viewsRepresentingBackButton
@property (retain, nonatomic) NSArray *viewsRepresentingContentBackground; // ivar: _viewsRepresentingContentBackground


-(id)init;


@end


#endif