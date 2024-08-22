// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNUIUSERACTIONLISTMODEL_H
#define CNUIUSERACTIONLISTMODEL_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CNUIUserActionItem.h"

@interface CNUIUserActionListModel : NSObject

@property (copy, nonatomic) NSArray *actions; // ivar: _actions
@property (retain, nonatomic) CNUIUserActionItem *defaultAction; // ivar: _defaultAction
@property (copy, nonatomic) NSArray *directoryServiceActions; // ivar: _directoryServiceActions
@property (copy, nonatomic) NSArray *foundOnDeviceActions; // ivar: _foundOnDeviceActions
@property (readonly, nonatomic) BOOL isEmpty;


+(id)emptyModel;
-(id)allActions;
-(id)description;
-(id)initWithDefaultAction:(id)arg0 actions:(id)arg1 directoryServiceActions:(id)arg2 foundOnDeviceActions:(id)arg3 ;
-(id)initWithModel:(id)arg0 actions:(id)arg1 ;


@end


#endif