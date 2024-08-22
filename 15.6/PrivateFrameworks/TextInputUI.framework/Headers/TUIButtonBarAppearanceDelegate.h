// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUIBUTTONBARAPPEARANCEDELEGATE_H
#define TUIBUTTONBARAPPEARANCEDELEGATE_H

@class _UIBarButtonItemAppearanceStorage, NSString, UIImageSymbolConfiguration, UIColor;
@protocol _UIButtonBarAppearanceDelegate;

#import <Foundation/Foundation.h>

#import "TUISystemInputAssistantView.h"

@interface TUIButtonBarAppearanceDelegate : NSObject <_UIButtonBarAppearanceDelegate>



@property (readonly, nonatomic) _UIBarButtonItemAppearanceStorage *appearanceStorage;
@property (readonly, nonatomic) CGFloat backButtonMargin;
@property (readonly, nonatomic) CGFloat backButtonMaximumWidth;
@property (readonly, nonatomic) NSInteger barType;
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) BOOL centerTextButtons;
@property (readonly, nonatomic) BOOL compactMetrics;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) CGFloat defaultEdgeSpacing;
@property (readonly, nonatomic) CGFloat defaultTextPadding;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly, nonatomic) BOOL isRTL;
@property (readonly) Class superclass;
@property (weak, nonatomic) TUISystemInputAssistantView *systemInputAssistantView; // ivar: _systemInputAssistantView
@property (readonly, nonatomic) UIColor *tintColor;


-(id)initWithSystemInputAssistantView:(id)arg0 ;


@end


#endif