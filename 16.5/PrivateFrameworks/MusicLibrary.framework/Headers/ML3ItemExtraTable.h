// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3ITEMEXTRATABLE_H
#define ML3ITEMEXTRATABLE_H

@class NSArray;


#import "ML3DatabaseTable.h"

@interface ML3ItemExtraTable : ML3DatabaseTable {
    NSArray *_columns;
}




-(id)columns;
-(id)name;


@end


#endif