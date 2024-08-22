// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDITORLOOKVIEWS_H
#define PREDITORLOOKVIEWS_H

@class UIView, NSArray;
@protocol PREditingLookViewProviding;

#import <Foundation/Foundation.h>


@interface PREditorLookViews : NSObject <PREditingLookViewProviding>



@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) NSArray *contentViews;
@property (readonly, nonatomic) UIView *floatingView; // ivar: _floatingView
@property (readonly, nonatomic) UIView *foregroundView; // ivar: _foregroundView


-(id)init;
-(void)enumerateViewsUsingBlock:(id)arg0 ;


@end


#endif