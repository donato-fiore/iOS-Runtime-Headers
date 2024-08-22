// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNUITOOLBARITEM_H
#define CNUITOOLBARITEM_H

@class NSString;

#import <Foundation/Foundation.h>


@interface CNUIToolbarItem : NSObject

@property (copy, nonatomic) id *actionBlock; // ivar: _actionBlock
@property (nonatomic) BOOL isCancel; // ivar: _isCancel
@property (nonatomic) BOOL isDefault; // ivar: _isDefault
@property (copy, nonatomic) NSString *title; // ivar: _title




@end


#endif