// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ML3CONTAINERTABLE_H
#define ML3CONTAINERTABLE_H

@class NSArray;


#import "ML3DatabaseTable.h"

@interface ML3ContainerTable : ML3DatabaseTable {
    NSArray *_columns;
}




-(id)columns;
-(id)name;


@end


#endif