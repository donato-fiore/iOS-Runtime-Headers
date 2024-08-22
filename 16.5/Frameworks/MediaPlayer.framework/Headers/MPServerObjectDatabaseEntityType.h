// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSERVEROBJECTDATABASEENTITYTYPE_H
#define MPSERVEROBJECTDATABASEENTITYTYPE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MPServerObjectDatabaseEntityType : NSObject

@property (readonly, copy, nonatomic) NSString *genericObjectRelationshipKey; // ivar: _genericObjectRelationshipKey
@property (readonly, copy, nonatomic) NSString *serverEntityType; // ivar: _serverEntityType


+(id)entityTypeWithServerEntityType:(id)arg0 genericObjectRelationshipKey:(id)arg1 ;


@end


#endif