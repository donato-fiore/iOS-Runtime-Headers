// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSHISTORYRIDESHAREITEM_H
#define MSHISTORYRIDESHAREITEM_H

@class NSData;


#import "MSHistoryItem.h"

@interface MSHistoryRideShareItem : MSHistoryItem {
    ? _endWaypoint;
    ? _startWaypoint;
}


@property (nonatomic, copy) NSData *endWaypoint;
@property (nonatomic, copy) NSData *startWaypoint;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 endWaypoint:(id)arg1 startWaypoint:(id)arg2 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif