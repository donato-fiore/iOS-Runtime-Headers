// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TABVIEWPOPOVERSOURCEINFO_H
#define TABVIEWPOPOVERSOURCEINFO_H

@class UIBarButtonItem, NSString, UIView;
@protocol _SFPopoverSourceInfo;

#import <Foundation/Foundation.h>

#import "BrowserController.h"

@interface TabViewPopoverSourceInfo : NSObject <_SFPopoverSourceInfo>

 {
    NSInteger _barItem;
    BrowserController *_browserController;
}


@property (readonly, nonatomic) UIBarButtonItem *barButtonItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger permittedArrowDirections;
@property (readonly, nonatomic) CGRect popoverSourceRect;
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (readonly, nonatomic) BOOL shouldDismissIfSourceRemovedAfterRepositioning;
@property (nonatomic) BOOL shouldHideArrow;
@property (nonatomic) BOOL shouldPassthroughSuperview;
@property (readonly) Class superclass;


-(id)initWithBrowserController:(id)arg0 barItem:(NSInteger)arg1 ;


@end


#endif