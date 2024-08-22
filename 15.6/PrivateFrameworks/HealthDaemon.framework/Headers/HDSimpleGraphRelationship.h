// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSIMPLEGRAPHRELATIONSHIP_H
#define HDSIMPLEGRAPHRELATIONSHIP_H

@class NSString;


#import "HDSimpleGraphObject.h"
#import "HDSimpleGraphNode.h"

@interface HDSimpleGraphRelationship : HDSimpleGraphObject

@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) NSInteger nameID; // ivar: _nameID
@property (readonly, weak, nonatomic) HDSimpleGraphNode *object; // ivar: _object
@property (readonly, nonatomic) NSInteger objectID; // ivar: _objectID
@property (readonly, weak, nonatomic) HDSimpleGraphNode *subject; // ivar: _subject
@property (readonly, nonatomic) NSInteger subjectID; // ivar: _subjectID


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithRowID:(NSInteger)arg0 ;
-(id)initWithRowID:(NSInteger)arg0 nameID:(NSInteger)arg1 name:(id)arg2 subjectID:(NSInteger)arg3 subject:(id)arg4 objectID:(NSInteger)arg5 object:(id)arg6 ;


@end


#endif