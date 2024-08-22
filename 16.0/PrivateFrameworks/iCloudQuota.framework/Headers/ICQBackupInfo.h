// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQBACKUPINFO_H
#define ICQBACKUPINFO_H

@class NSArray, NSNumber;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICQBackupInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSArray *deviceGroups; // ivar: _deviceGroups
@property (retain, nonatomic) NSNumber *noOfBackupDevices; // ivar: _noOfBackupDevices


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif