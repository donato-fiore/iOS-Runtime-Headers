// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCREDIRECTORCHANGEITEM_H
#define HMCREDIRECTORCHANGEITEM_H

@class HMFObject, NSSet, NSUUID, Protocol;


#import "MKFObjectDatabaseID.h"

@interface HMCRedirectorChangeItem : HMFObject

@property (readonly) NSSet *changedProperties; // ivar: _changedProperties
@property (readonly) MKFObjectDatabaseID *databaseID; // ivar: _databaseID
@property (readonly) NSUUID *modelID; // ivar: _modelID
@property (readonly) Protocol *modelType; // ivar: _modelType


-(BOOL)isObjectType:(id)arg0 ;
-(id)description;


@end


#endif