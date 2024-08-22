// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIINTERFACEACTION_H
#define UIINTERFACEACTION_H

@class NSString, NSPointerArray;
@protocol NSCopying, _UIInterfaceActionPresenting;

#import <Foundation/Foundation.h>

#import "UIInterfaceActionRepresentationView.h"
#import "UIView.h"
#import "UIViewController.h"
#import "UIColor.h"
#import "UIImage.h"
#import "UIInterfaceActionVisualStyle.h"

@interface UIInterfaceAction : NSObject <NSCopying>



@property (weak, nonatomic, setter=_setPresentingController:) NSObject<_UIInterfaceActionPresenting> *_presentingController; // ivar: __presentingController
@property (readonly, nonatomic) NSInteger _typeForDeterminingViewRepresentation;
@property (weak, nonatomic, setter=_setVisualRepresentation:) UIInterfaceActionRepresentationView *_visualRepresentation; // ivar: __visualRepresentation
@property (copy, nonatomic) NSString *classificationTitle; // ivar: _classificationTitle
@property (readonly, nonatomic) UIView *customContentView; // ivar: _customContentView
@property (retain, nonatomic) UIViewController *customContentViewController; // ivar: _customContentViewController
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (nonatomic, getter=_isFocused, setter=_setIsFocused:) BOOL focused; // ivar: _focused
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (retain, nonatomic, getter=_imageTintColor, setter=_setImageTintColor:) UIColor *imageTintColor; // ivar: _imageTintColor
@property (retain, nonatomic) UIImage *leadingImage; // ivar: _leadingImage
@property (nonatomic) CGSize leadingImageLayoutSize; // ivar: _leadingImageLayoutSize
@property (nonatomic, getter=_isPreferred, setter=_setIsPreferred:) BOOL preferred; // ivar: _preferred
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger titleAlignment; // ivar: _titleAlignment
@property (retain, nonatomic, getter=_titleTextColor, setter=_setTitleTextColor:) UIColor *titleTextColor; // ivar: _titleTextColor
@property (retain, nonatomic) UIImage *trailingImage; // ivar: _trailingImage
@property (nonatomic) CGSize trailingImageLayoutSize; // ivar: _trailingImageLayoutSize
@property (nonatomic) NSInteger type; // ivar: _type
@property (retain, nonatomic, getter=_visualStyle, setter=_setVisualStyle:) UIInterfaceActionVisualStyle *visualStyle; // ivar: _visualStyle
@property (readonly, nonatomic) NSPointerArray *weakDisplayPropertyObservers; // ivar: _weakDisplayPropertyObservers


+(BOOL)changedProperties:(id)arg0 containsAny:(id)arg1 ;
+(id)_observableDisplayProperties;
+(id)actionWithCustomContentView:(id)arg0 handler:(id)arg1 ;
+(id)actionWithCustomContentViewController:(id)arg0 ;
+(id)actionWithTitle:(id)arg0 type:(NSInteger)arg1 handler:(id)arg2 ;
+(void)_setInterfaceActionCanInvokeActionsWithoutPresentingController:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithTitle:(id)arg0 type:(NSInteger)arg1 customContentViewController:(id)arg2 customContentView:(id)arg3 handler:(id)arg4 ;
-(struct CGSize )_layoutSizeForImageProperty:(id)arg0 ;
-(void)_addActionDisplayPropertyObserver:(id)arg0 ;
-(void)_invokeHandlerWithCompletionBlock:(id)arg0 ;
-(void)_notifyObserversDidChangeActionProperty:(id)arg0 ;
-(void)_notifyObserversVisualStyleDidChange;
-(void)_removeActionDisplayPropertyObserver:(id)arg0 ;


@end


#endif