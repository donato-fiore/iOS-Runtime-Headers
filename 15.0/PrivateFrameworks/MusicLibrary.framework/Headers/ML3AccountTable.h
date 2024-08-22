// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ML3ACCOUNTTABLE_H
#define ML3ACCOUNTTABLE_H

@class NSArray;


#import "ML3DatabaseTable.h"

@interface ML3AccountTable : ML3DatabaseTable {
    NSArray *_columns;
}




-(id)columns;
-(id)name;


@end


#endif