// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQBACKUPDEVICEGROUP_H
#define ICQBACKUPDEVICEGROUP_H

@class NSArray, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQBackupDeviceGroup : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *backupDevices; // ivar: _backupDevices
@property (copy, nonatomic) NSString *sectionFooter; // ivar: _sectionFooter
@property (copy, nonatomic) NSString *sectionHeader; // ivar: _sectionHeader


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif