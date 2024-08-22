// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLGROUPBYINTERMEDIATE_H
#define NSSQLGROUPBYINTERMEDIATE_H

@class NSArray;


#import "NSSQLIntermediate.h"

@interface NSSQLGroupByIntermediate : NSSQLIntermediate {
    NSArray *_properties;
}




-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithProperties:(id)arg0 inScope:(id)arg1 ;
-(void)dealloc;


@end


#endif