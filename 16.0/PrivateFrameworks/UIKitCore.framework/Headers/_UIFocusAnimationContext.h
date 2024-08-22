// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIFOCUSANIMATIONCONTEXT_H
#define _UIFOCUSANIMATIONCONTEXT_H

@class NSString;
@protocol UIFocusAnimationContext;

#import <Foundation/Foundation.h>


@interface _UIFocusAnimationContext : NSObject <UIFocusAnimationContext>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDuration:(CGFloat)arg0 ;


@end


#endif