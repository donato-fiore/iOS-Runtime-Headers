// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIVITYSORTITEM_H
#define _UIACTIVITYSORTITEM_H


#import <Foundation/Foundation.h>

#import "UIActivity.h"

@interface _UIActivitySortItem : NSObject

@property (readonly, nonatomic) UIActivity *activity; // ivar: _activity
@property (readonly, nonatomic) NSInteger group; // ivar: _group
@property (readonly, nonatomic) id *secondarySortValue; // ivar: _secondarySortValue
@property (readonly, nonatomic) id *tertiarySortValue; // ivar: _tertiarySortValue


+(id)sortDescriptorForActivity:(id)arg0 withGroup:(NSInteger)arg1 secondarySortValue:(id)arg2 ;
+(id)sortDescriptorForActivity:(id)arg0 withGroup:(NSInteger)arg1 secondarySortValue:(id)arg2 tertiarySortValue:(id)arg3 ;
-(NSInteger)compare:(id)arg0 ;
-(id)debugDescription;


@end


#endif