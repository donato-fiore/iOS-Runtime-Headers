// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSIRIENDPOINTPROFILEASSISTANT_H
#define HMDSIRIENDPOINTPROFILEASSISTANT_H

@class HMFObject, NSNumber, NSArray, NSString;
@protocol NSSecureCoding;


#import "HMDService.h"

@interface HMDSiriEndpointProfileAssistant : HMFObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
}


@property (copy) NSNumber *active; // ivar: _active
@property (readonly) NSArray *allCharacteristics;
@property (readonly) NSArray *characteristicsToMonitor;
@property (copy) NSNumber *identifier; // ivar: _identifier
@property (copy) NSString *name; // ivar: _name
@property (readonly) HMDService *service; // ivar: _service


+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)shortDescription;
-(BOOL)containsCharacteristic:(id)arg0 ;
-(BOOL)updateCharacteristic:(id)arg0 value:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithService:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif