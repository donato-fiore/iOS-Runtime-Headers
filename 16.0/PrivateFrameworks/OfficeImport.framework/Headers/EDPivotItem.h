// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDPIVOTITEM_H
#define EDPIVOTITEM_H


#import <Foundation/Foundation.h>

#import "EDCollection.h"

@interface EDPivotItem : NSObject {
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}




+(id)pivotItem;
-(id)description;
-(id)init;
-(id)itemIndexes;
-(int)type;
-(unsigned int)repeatedItemCounts;
-(void)setRepeatedItemCounts:(unsigned int)arg0 ;
-(void)setType:(int)arg0 ;


@end


#endif