// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSCRIPTWINDOW_H
#define SUSCRIPTWINDOW_H

@class NSNumber, WebScriptObject, NSString;


#import "SUScriptObject.h"
#import "SUScriptViewController.h"
#import "SUScriptCanvasFunction.h"
#import "SUScriptFunction.h"
#import "SUScriptWindowContext.h"

@interface SUScriptWindow : SUScriptObject {
    SUScriptViewController *_backViewController;
    BOOL _canSwipeToDismiss;
    SUScriptViewController *_frontViewController;
    id *_height;
    SUScriptCanvasFunction *_maskFunction;
    id *_shadowOpacity;
    id *_shadowRadius;
    SUScriptFunction *_shouldDismissFunction;
    id *_width;
}


@property (retain) SUScriptViewController *backViewController;
@property (copy) id *canSwipeToDismiss;
@property (readonly) SUScriptWindowContext *context; // ivar: _context
@property (retain) SUScriptViewController *frontViewController;
@property (retain) NSNumber *height;
@property (retain) WebScriptObject *maskFunction;
@property (retain) NSNumber *shadowOpacity;
@property (retain) NSNumber *shadowRadius;
@property (retain) WebScriptObject *shouldDismissFunction;
@property (readonly) NSString *style;
@property (retain) NSNumber *width;
@property (readonly) SUScriptViewController *windowParentViewController;


+(id)webScriptNameForKeyName:(id)arg0 ;
+(id)webScriptNameForSelector:(SEL)arg0 ;
+(void)dismissWindowsWithOptions:(id)arg0 ;
+(void)initialize;
-(id)_backgroundViewController:(BOOL)arg0 ;
-(id)_className;
-(id)_copySafeTransitionOptionsFromOptions:(id)arg0 ;
-(id)_newOverlayTransitionWithOptions:(id)arg0 ;
-(id)_overlayViewController:(BOOL)arg0 ;
-(id)attributeKeys;
-(id)init;
-(id)initWithContext:(id)arg0 ;
-(id)scriptAttributeKeys;
-(struct CGSize )_overlaySize;
-(void)_overlayDidDismissNotification:(id)arg0 ;
-(void)_overlayDidFlipNotification:(id)arg0 ;
-(void)_overlayDidShowNotification:(id)arg0 ;
-(void)_registerForOverlayNotifications;
-(void)dealloc;
-(void)dismiss:(id)arg0 ;
-(void)flip:(id)arg0 ;
-(void)show:(id)arg0 ;


@end


#endif