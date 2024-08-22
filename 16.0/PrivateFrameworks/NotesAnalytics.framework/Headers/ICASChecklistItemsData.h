// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICASCHECKLISTITEMSDATA_H
#define ICASCHECKLISTITEMSDATA_H

@class NSNumber;
@protocol AADataEventType;

#import <Foundation/Foundation.h>


@interface ICASChecklistItemsData : NSObject <AADataEventType>



@property (readonly, nonatomic) NSNumber *countOfCheckedItems; // ivar: _countOfCheckedItems
@property (readonly, nonatomic) NSNumber *countOfTotalItems; // ivar: _countOfTotalItems


+(id)dataName;
-(id)initWithCountOfCheckedItems:(id)arg0 countOfTotalItems:(id)arg1 ;
-(id)toDict;


@end


#endif