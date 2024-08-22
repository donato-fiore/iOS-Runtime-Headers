// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSIMPLEGRAPHRELATIONSHIP_H
#define HDSIMPLEGRAPHRELATIONSHIP_H



#import "HDSimpleGraphObject.h"

@interface HDSimpleGraphRelationship : HDSimpleGraphObject

@property (readonly, nonatomic) NSInteger objectID; // ivar: _objectID
@property (readonly, nonatomic) NSInteger subjectID; // ivar: _subjectID
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithRowID:(NSInteger)arg0 subjectID:(NSInteger)arg1 type:(NSInteger)arg2 objectID:(NSInteger)arg3 ;
-(id)initWithRowID:(NSInteger)arg0 subjectID:(NSInteger)arg1 type:(NSInteger)arg2 objectID:(NSInteger)arg3 version:(NSInteger)arg4 slots:(NSUInteger)arg5 ;
-(id)initWithRowID:(NSInteger)arg0 version:(NSInteger)arg1 slots:(NSUInteger)arg2 deleted:(BOOL)arg3 ;


@end


#endif