// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSIMPLEGRAPHATTRIBUTE_H
#define HDSIMPLEGRAPHATTRIBUTE_H

@class NSString;


#import "HDSimpleGraphObject.h"
#import "HDSimpleGraphNode.h"

@interface HDSimpleGraphAttribute : HDSimpleGraphObject

@property (readonly, copy, nonatomic) NSString *key; // ivar: _key
@property (readonly, nonatomic) NSInteger keyID; // ivar: _keyID
@property (readonly, weak, nonatomic) HDSimpleGraphNode *node; // ivar: _node
@property (readonly, nonatomic) NSInteger nodeID; // ivar: _nodeID
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value
@property (readonly, nonatomic) NSInteger valueType; // ivar: _valueType


-(id)description;
-(id)init;
-(id)initWithRowID:(NSInteger)arg0 ;
-(id)initWithRowID:(NSInteger)arg0 keyID:(NSInteger)arg1 key:(id)arg2 value:(id)arg3 valueType:(NSInteger)arg4 nodeID:(NSInteger)arg5 node:(id)arg6 ;


@end


#endif