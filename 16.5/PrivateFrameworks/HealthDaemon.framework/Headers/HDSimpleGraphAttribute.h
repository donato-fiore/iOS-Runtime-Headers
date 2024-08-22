// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSIMPLEGRAPHATTRIBUTE_H
#define HDSIMPLEGRAPHATTRIBUTE_H

@class NSString;


#import "HDSimpleGraphObject.h"

@interface HDSimpleGraphAttribute : HDSimpleGraphObject

@property (readonly, nonatomic) NSInteger nodeID; // ivar: _nodeID
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *value; // ivar: _value


-(id)description;
-(id)init;
-(id)initWithRowID:(NSInteger)arg0 type:(NSInteger)arg1 value:(id)arg2 nodeID:(NSInteger)arg3 ;
-(id)initWithRowID:(NSInteger)arg0 type:(NSInteger)arg1 value:(id)arg2 nodeID:(NSInteger)arg3 version:(NSInteger)arg4 slots:(NSUInteger)arg5 ;


@end


#endif