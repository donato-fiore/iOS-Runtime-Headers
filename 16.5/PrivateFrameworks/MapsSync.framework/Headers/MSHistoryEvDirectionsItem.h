// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSHISTORYEVDIRECTIONSITEM_H
#define MSHISTORYEVDIRECTIONSITEM_H

@class NSString;


#import "MSHistoryDirectionsItem.h"

@interface MSHistoryEvDirectionsItem : MSHistoryDirectionsItem {
    ? _requiredCharge;
    ? _vehicleIdentifier;
}


@property (nonatomic) CGFloat requiredCharge;
@property (nonatomic, copy) NSString *vehicleIdentifier;


+(Class)managedClass;
-(id)initWithObject:(id)arg0 store:(id)arg1 ;
-(id)initWithStore:(id)arg0 requiredCharge:(CGFloat)arg1 vehicleIdentifier:(id)arg2 ;
-(void)setPropertiesUnsafeWithManagedObject:(id)arg0 ;


@end


#endif