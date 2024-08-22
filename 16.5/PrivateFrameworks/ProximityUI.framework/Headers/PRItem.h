// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRITEM_H
#define PRITEM_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface PRItem : NSObject

@property (readonly, nonatomic) BOOL isOwned; // ivar: _isOwned
@property (readonly, nonatomic) NSUUID *productUUID; // ivar: _productUUID
@property (readonly, nonatomic) BOOL requiresLowerRangingFrequency; // ivar: _requiresLowerRangingFrequency
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)itemWithUUID:(id)arg0 productUUID:(id)arg1 isOwned:(BOOL)arg2 ;
+(id)itemWithUUID:(id)arg0 productUUID:(id)arg1 isOwned:(BOOL)arg2 requiresLowerRangingFrequency:(BOOL)arg3 ;
-(id)initWithUUID:(id)arg0 productUUID:(id)arg1 isOwned:(BOOL)arg2 ;
-(id)initWithUUID:(id)arg0 productUUID:(id)arg1 isOwned:(BOOL)arg2 requiresLowerRangingFrequency:(BOOL)arg3 ;


@end


#endif