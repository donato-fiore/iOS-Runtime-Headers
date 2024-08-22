// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXDATERANGESET_H
#define PXDATERANGESET_H

@class NSMutableArray;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface PXDateRangeSet : NSObject <NSCopying, NSMutableCopying>



@property (retain, nonatomic) NSMutableArray *_dateRanges; // ivar: __dateRanges
@property (readonly, nonatomic) NSInteger count;


+(id)dateRangeSet;
+(id)dateRangeSetWithDateRange:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateRanges;
-(id)description;
-(id)init;
-(id)initWithDateRange:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif