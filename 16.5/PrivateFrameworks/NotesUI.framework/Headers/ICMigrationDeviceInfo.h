// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICMIGRATIONDEVICEINFO_H
#define ICMIGRATIONDEVICEINFO_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICMigrationDeviceInfo : NSObject <NSCopying>



@property (readonly, nonatomic) BOOL isIOSDevice; // ivar: _isIOSDevice
@property (readonly, nonatomic) BOOL isOSXDevice; // ivar: _isOSXDevice
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL upgradable; // ivar: _upgradable
@property (readonly, nonatomic) BOOL upgradableToIOS13; // ivar: _upgradableToIOS13
@property (readonly, nonatomic) BOOL upgradableToIOS14orMacOS11; // ivar: _upgradableToIOS14orMacOS11
@property (readonly, nonatomic) BOOL upgraded; // ivar: _upgraded
@property (readonly, nonatomic) BOOL upgradedToIOS13; // ivar: _upgradedToIOS13
@property (readonly, nonatomic) BOOL upgradedToIOS14EorMacOS11E; // ivar: _upgradedToIOS14EorMacOS11E


+(void)logDeviceList:(id)arg0 ;
-(BOOL)shouldBeHidden;
-(id)attributedStringWithAttributes:(id)arg0 asteriskColor:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 upgradable:(BOOL)arg1 upgraded:(BOOL)arg2 ;
-(id)loggableDescription;


@end


#endif