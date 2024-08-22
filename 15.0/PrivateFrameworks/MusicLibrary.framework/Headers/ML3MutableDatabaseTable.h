// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3MUTABLEDATABASETABLE_H
#define ML3MUTABLEDATABASETABLE_H

@class NSArray, NSString;


#import "ML3DatabaseTable.h"

@interface ML3MutableDatabaseTable : ML3DatabaseTable

@property (copy, nonatomic) NSArray *columns;
@property (copy, nonatomic) NSArray *foreignKeyConstraints;
@property (copy, nonatomic) NSString *name;




@end


#endif