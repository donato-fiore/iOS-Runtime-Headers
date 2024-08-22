// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MENUITEMMODEL_H
#define MENUITEMMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MenuItemModel : NSObject

@property (readonly, copy, nonatomic) id *action; // ivar: _action
@property (readonly, nonatomic) id *payload; // ivar: _payload
@property (readonly, copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


-(id)initWithTitle:(id)arg0 subtitle:(id)arg1 payload:(id)arg2 action:(id)arg3 ;


@end


#endif