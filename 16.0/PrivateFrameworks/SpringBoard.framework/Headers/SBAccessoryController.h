// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBACCESSORYCONTROLLER_H
#define SBACCESSORYCONTROLLER_H

@class NSString;
@protocol SBWindowedAccessoryViewControllerDelegate;

#import <Foundation/Foundation.h>

#import "SBWindow.h"
#import "SBWindowedAccessoryViewController.h"

@interface SBAccessoryController : NSObject <SBWindowedAccessoryViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBWindow *window; // ivar: _window
@property (retain, nonatomic) SBWindowedAccessoryViewController *windowedAccessoryViewController; // ivar: _windowedAccessoryViewController
@property (readonly, nonatomic, getter=isWindowedAccessoryWindowVisible) BOOL windowedAccessoryWindowVisiblevisible;


+(id)sharedInstance;
+(id)sharedInstanceIfExists;
-(void)_showWindowedAccessoryWindow:(BOOL)arg0 forWindowScene:(id)arg1 ;
-(void)showWindowedAccessoryWindow:(BOOL)arg0 forWindowScene:(id)arg1 ;
-(void)windowedAccessoryViewControllerForceDetachButtonTapped:(id)arg0 ;


@end


#endif