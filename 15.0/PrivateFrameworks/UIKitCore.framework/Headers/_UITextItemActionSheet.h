// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITEXTITEMACTIONSHEET_H
#define _UITEXTITEMACTIONSHEET_H

@class NSString, NSArray;
@protocol _UIRotatingAlertControllerDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "_UIRotatingAlertController.h"
#import "UIWindow.h"

@interface _UITextItemActionSheet : NSObject <_UIRotatingAlertControllerDelegate>

 {
    NSString *_title;
    UIView *_view;
    CGRect _rect;
    NSArray *_ddActions;
    _UIRotatingAlertController *_alertController;
    UIWindow *_alertWindow;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_hasAlertActions;
-(id)_alertActionsWithController:(id)arg0 ;
-(id)hostViewForSheet:(id)arg0 ;
-(id)initWithTitle:(id)arg0 datadetectorActions:(id)arg1 fromRect:(struct CGRect )arg2 inView:(id)arg3 ;
-(struct CGRect )initialPresentationRectInHostViewForSheet:(id)arg0 ;
-(struct CGRect )presentationRectInHostViewForSheet:(id)arg0 ;
-(void)dealloc;
-(void)present;


@end


#endif