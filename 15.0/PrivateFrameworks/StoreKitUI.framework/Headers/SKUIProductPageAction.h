// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIPRODUCTPAGEACTION_H
#define SKUIPRODUCTPAGEACTION_H

@class NSString, NSURL, UIViewController;

#import <Foundation/Foundation.h>

#import "SKUIItem.h"

@interface SKUIProductPageAction : NSObject {
    NSString *_urlTitle;
}


@property (copy, nonatomic) NSURL *URL; // ivar: _url
@property (nonatomic) NSInteger actionType; // ivar: _actionType
@property (retain, nonatomic) SKUIItem *item; // ivar: _item
@property (readonly, nonatomic) UIViewController *viewController;
@property (copy, nonatomic) id *viewControllerBlock; // ivar: _viewControllerBlock


+(id)actionWithType:(NSInteger)arg0 ;


@end


#endif