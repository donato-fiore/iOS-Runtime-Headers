// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUICONTEXTACTIONSPRESENTATIONSOURCE_H
#define SKUICONTEXTACTIONSPRESENTATIONSOURCE_H

@class UIBarButtonItem, UIView, UIViewController;

#import <Foundation/Foundation.h>


@interface SKUIContextActionsPresentationSource : NSObject

@property (retain, nonatomic) UIBarButtonItem *barButtonItem; // ivar: _barButtonItem
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(id)initWithViewController:(id)arg0 ;
-(void)presentViewController:(id)arg0 permittedArrowDirections:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif