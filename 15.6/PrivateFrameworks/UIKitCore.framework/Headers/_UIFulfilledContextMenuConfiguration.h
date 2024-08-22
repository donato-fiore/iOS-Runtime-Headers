// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIFULFILLEDCONTEXTMENUCONFIGURATION_H
#define _UIFULFILLEDCONTEXTMENUCONFIGURATION_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIMenu.h"
#import "UIViewController.h"

@interface _UIFulfilledContextMenuConfiguration : NSObject

@property (copy, nonatomic) NSObject<NSCopying> *identifier; // ivar: _identifier
@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (retain, nonatomic) UIViewController *previewViewController; // ivar: _previewViewController


-(BOOL)isPresentable;


@end


#endif