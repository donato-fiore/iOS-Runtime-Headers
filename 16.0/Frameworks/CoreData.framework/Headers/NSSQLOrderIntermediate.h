// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSQLORDERINTERMEDIATE_H
#define NSSQLORDERINTERMEDIATE_H

@class NSArray;


#import "NSSQLIntermediate.h"

@interface NSSQLOrderIntermediate : NSSQLIntermediate {
    NSArray *_sortDescriptors;
}




-(id)generateSQLStringInContext:(id)arg0 ;
-(id)initWithSortDescriptors:(id)arg0 inScope:(id)arg1 ;
-(void)dealloc;


@end


#endif