// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNMECARDSHARINGROWITEM_H
#define CNMECARDSHARINGROWITEM_H

@class UIView, NSString;

#import <Foundation/Foundation.h>


@interface CNMeCardSharingRowItem : NSObject

@property (readonly, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (readonly, copy, nonatomic) id *confirmationHandler; // ivar: _confirmationHandler
@property (nonatomic) BOOL isSelected; // ivar: _isSelected
@property (readonly, nonatomic) NSString *label; // ivar: _label


-(id)initWithLabel:(id)arg0 accessoryView:(id)arg1 ;
-(id)initWithLabel:(id)arg0 accessoryView:(id)arg1 confirmationHandler:(id)arg2 ;


@end


#endif