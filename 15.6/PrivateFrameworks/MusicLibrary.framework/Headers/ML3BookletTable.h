// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3BOOKLETTABLE_H
#define ML3BOOKLETTABLE_H

@class NSArray;


#import "ML3DatabaseTable.h"

@interface ML3BookletTable : ML3DatabaseTable {
    NSArray *_columns;
}




-(id)columns;
-(id)name;


@end


#endif