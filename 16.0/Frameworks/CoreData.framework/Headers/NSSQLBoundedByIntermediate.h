// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLBOUNDEDBYINTERMEDIATE_H
#define NSSQLBOUNDEDBYINTERMEDIATE_H

@class NSExpression;


#import "NSSQLIntermediate.h"
#import "NSSQLEntity.h"
#import "NSAttributeDescription.h"

@interface NSSQLBoundedByIntermediate : NSSQLIntermediate {
    NSSQLEntity *_entity;
    NSAttributeDescription *_target;
    NSExpression *_bounds;
}




-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithWorkingEntity:(id)arg0 target:(id)arg1 bounds:(id)arg2 scope:(id)arg3 ;
-(void)dealloc;


@end


#endif