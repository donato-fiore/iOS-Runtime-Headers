// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REARRAYDIFF_H
#define REARRAYDIFF_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface REArrayDiff : NSObject

@property (readonly, nonatomic) NSArray *allOperations; // ivar: _allOperations


// +(id)_createSetFromElementArray:(id)arg0 equalComparator:(id)arg1 hashGenerator:(unk)arg2  ;
+(id)_indexSetFromSet:(id)arg0 ;
+(id)diffFromElements:(id)arg0 toElements:(id)arg1 ;
// +(id)diffFromElements:(id)arg0 toElements:(id)arg1 equalComparator:(id)arg2 hashGenerator:(unk)arg3 changeComparator:(id)arg4  ;
-(void)enumerateOperationsUsingBlock:(id)arg0 ;


@end


#endif