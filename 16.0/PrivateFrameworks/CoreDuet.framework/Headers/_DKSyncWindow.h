// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DKSYNCWINDOW_H
#define _DKSYNCWINDOW_H

@class NSDate;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_DKEvent.h"

@interface _DKSyncWindow : NSObject <NSCopying>

 {
    _DKEvent *_event;
    NSDate *_startDate;
    NSDate *_endDate;
}




+(id)choppedWindowsFromSortedNormalizedWindows:(id)arg0 betweenWindowMinimumDate:(id)arg1 andWindowMaximumDate:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;


@end


#endif