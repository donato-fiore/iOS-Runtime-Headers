// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSIMPLEGRAPHNODE_H
#define HDSIMPLEGRAPHNODE_H

@class NSArray, NSString;


#import "HDSimpleGraphObject.h"

@interface HDSimpleGraphNode : HDSimpleGraphObject

@property (readonly, nonatomic) NSArray *attributes; // ivar: _attributes
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSArray *relationships; // ivar: _relationships


-(id)description;
-(id)init;
-(id)initWithRowID:(NSInteger)arg0 ;
-(id)initWithRowID:(NSInteger)arg0 name:(id)arg1 attributes:(id)arg2 relationships:(id)arg3 ;


@end


#endif