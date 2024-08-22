// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSCAPACITYBARDATA_H
#define PSCAPACITYBARDATA_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PSCapacityBarData : NSObject <NSCopying>

 {
    NSArray *_orderedCategories;
    NSArray *_adjustedCategories;
}


@property (readonly) NSArray *adjustedCategories;
@property NSInteger bytesUsed; // ivar: _bytesUsed
@property NSInteger capacity; // ivar: _capacity
@property (retain, nonatomic) NSArray *categories; // ivar: _categories
@property NSInteger categoryLimit; // ivar: _categoryLimit
@property BOOL hideTinyCategories; // ivar: _hideTinyCategories
@property (readonly) NSArray *orderedCategories;
@property int sortStyle; // ivar: _sortStyle


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif