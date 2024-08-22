// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSQLITEQUERYPLANNODE_H
#define PLSQLITEQUERYPLANNODE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLSqliteQueryPlanNode : NSObject

@property (readonly) int identifier; // ivar: _identifier
@property (readonly, copy) NSString *nodeDescription; // ivar: _nodeDescription
@property (readonly) int parentIdentifier; // ivar: _parentIdentifier
@property (readonly) int unused; // ivar: _unused


-(id)initWithIdentifier:(int)arg0 parentIdentifier:(int)arg1 unused:(int)arg2 nodeDescription:(id)arg3 ;


@end


#endif