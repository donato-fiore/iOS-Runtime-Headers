// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLPERSISTENTSETTINGS_H
#define SCLPERSISTENTSETTINGS_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "SCLScheduleSettings.h"

@interface SCLPersistentSettings : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, getter=isManualSchoolModeEnabled) BOOL manualSchoolModeEnabled; // ivar: _manualSchoolModeEnabled
@property (retain, nonatomic) SCLScheduleSettings *scheduleSettings; // ivar: _scheduleSettings


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif