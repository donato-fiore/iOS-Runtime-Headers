// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIVIEWPROPERTYANIMATIONDESCRIPTION_H
#define _UIVIEWPROPERTYANIMATIONDESCRIPTION_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UIViewPropertyAnimationDescription : NSObject

@property (readonly, nonatomic) NSMutableDictionary *updates; // ivar: _updates
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


-(id)init;
-(id)initWithView:(id)arg0 ;
-(void)_addUpdate:(id)arg0 ;


@end


#endif