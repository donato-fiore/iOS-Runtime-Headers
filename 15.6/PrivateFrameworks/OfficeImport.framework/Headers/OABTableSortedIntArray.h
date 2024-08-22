// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OABTABLESORTEDINTARRAY_H
#define OABTABLESORTEDINTARRAY_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface OABTableSortedIntArray : NSObject {
    NSArray *mIntArray;
}




-(id)initWithIntSet:(id)arg0 ;
-(int)dim;
-(int)indexOfInt:(int)arg0 ;
-(int)intAtIndex:(int)arg0 ;


@end


#endif