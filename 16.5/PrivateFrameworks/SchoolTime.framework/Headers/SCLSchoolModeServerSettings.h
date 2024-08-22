// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLSCHOOLMODESERVERSETTINGS_H
#define SCLSCHOOLMODESERVERSETTINGS_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SCLScheduleSettings.h"
#import "SCLState.h"

@interface SCLSchoolModeServerSettings : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic, getter=isLoaded) BOOL loaded; // ivar: _loaded
@property (copy, nonatomic) SCLScheduleSettings *scheduleSettings; // ivar: _scheduleSettings
@property (copy, nonatomic) SCLState *state; // ivar: _state


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif