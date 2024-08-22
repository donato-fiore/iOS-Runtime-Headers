// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIWINDOWSCENEACTIVATIONIDENTIFIER_H
#define _UIWINDOWSCENEACTIVATIONIDENTIFIER_H

@class NSString;
@protocol _UIContentEffectKey;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIWindowSceneActivationIdentifier : NSObject <_UIContentEffectKey>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint location; // ivar: _location
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


+(id)identifierWithLocation:(struct CGPoint )arg0 inView:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif