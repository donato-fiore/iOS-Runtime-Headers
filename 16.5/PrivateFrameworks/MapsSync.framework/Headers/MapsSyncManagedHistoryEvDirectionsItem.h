// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAPSSYNCMANAGEDHISTORYEVDIRECTIONSITEM_H
#define MAPSSYNCMANAGEDHISTORYEVDIRECTIONSITEM_H

@class NSString;


#import "MapsSyncManagedHistoryDirectionsItem.h"

@interface MapsSyncManagedHistoryEvDirectionsItem : MapsSyncManagedHistoryDirectionsItem

@property (nonatomic) CGFloat requiredCharge;
@property (nonatomic, copy) NSString *vehicleIdentifier;


+(Class)wrapperClass;
-(id)initWithEntity:(id)arg0 insertIntoManagedObjectContext:(id)arg1 ;


@end


#endif