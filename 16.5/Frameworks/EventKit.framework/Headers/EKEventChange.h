// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTCHANGE_H
#define EKEVENTCHANGE_H



#import "EKCalendarItemChange.h"
#import "EKObjectID.h"

@interface EKEventChange : EKCalendarItemChange

@property (readonly, nonatomic) BOOL availabilityChanged; // ivar: _availabilityChanged
@property (readonly, nonatomic) EKObjectID *originalItemID; // ivar: _originalItemID
@property (readonly, nonatomic) BOOL privacyLevelChanged; // ivar: _privacyLevelChanged
@property (readonly, nonatomic) BOOL statusChanged; // ivar: _statusChanged
@property (readonly, nonatomic) BOOL travelStartLocationChanged; // ivar: _travelStartLocationChanged
@property (readonly, nonatomic) BOOL travelTimeChanged; // ivar: _travelTimeChanged


+(int)entityType;
-(id)initWithChangeProperties:(id)arg0 ;


@end


#endif