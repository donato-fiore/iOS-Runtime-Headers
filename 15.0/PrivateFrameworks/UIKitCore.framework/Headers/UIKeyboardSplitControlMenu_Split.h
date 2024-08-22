// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKEYBOARDSPLITCONTROLMENU_SPLIT_H
#define UIKEYBOARDSPLITCONTROLMENU_SPLIT_H

@class NSString;
@protocol UIKeyboardSplitControlMenuItem;

#import <Foundation/Foundation.h>


@interface UIKeyboardSplitControlMenu_Split : NSObject <UIKeyboardSplitControlMenuItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, retain) NSString *label;
@property (readonly) Class superclass;
@property (readonly) BOOL visible;


-(void)actionForMenu:(id)arg0 ;


@end


#endif