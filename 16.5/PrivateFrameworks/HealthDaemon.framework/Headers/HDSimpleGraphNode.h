// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSIMPLEGRAPHNODE_H
#define HDSIMPLEGRAPHNODE_H

@class NSArray;


#import "HDSimpleGraphObject.h"

@interface HDSimpleGraphNode : HDSimpleGraphObject

@property (readonly, nonatomic) NSArray *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSArray *relationships; // ivar: _relationships


-(id)description;
-(id)init;
-(id)initWithRowID:(NSInteger)arg0 attributes:(id)arg1 relationships:(id)arg2 ;
-(id)initWithRowID:(NSInteger)arg0 attributes:(id)arg1 relationships:(id)arg2 version:(NSInteger)arg3 slots:(NSUInteger)arg4 deleted:(BOOL)arg5 ;


@end


#endif