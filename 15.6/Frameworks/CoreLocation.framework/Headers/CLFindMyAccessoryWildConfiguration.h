// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CLFINDMYACCESSORYWILDCONFIGURATION_H
#define CLFINDMYACCESSORYWILDCONFIGURATION_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CLFindMyAccessoryWildConfiguration : NSObject <NSSecureCoding>



@property (readonly) NSDate *desiredKeyRollDate; // ivar: _desiredKeyRollDate
@property (readonly) unsigned short keyCount; // ivar: _keyCount
@property (readonly) unsigned int keyRollInterval; // ivar: _keyRollInterval
@property (readonly) unsigned short keysRemaining; // ivar: _keysRemaining


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)encodeConfiguration;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDesiredNextKeyRollDate:(id)arg0 keyRollInterval:(unsigned int)arg1 keysRemainingInWildPeriod:(unsigned short)arg2 wildPeriodKeyCount:(unsigned short)arg3 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif