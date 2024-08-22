// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCOMPATIBILITYCONTROLLERDEVICE_H
#define ICCOMPATIBILITYCONTROLLERDEVICE_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICCompatibilityControllerDevice : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger maximumNotesVersion; // ivar: _maximumNotesVersion
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger notesVersion; // ivar: _notesVersion
@property (readonly, nonatomic, getter=isUpgradable) BOOL upgradable;
@property (readonly, nonatomic, getter=isUpgraded) BOOL upgraded;


+(BOOL)supportsSecureCoding;
+(NSUInteger)maximumNotesVersionForHardwareInfo:(struct ICDeviceHardwareInfo )arg0 ;
+(NSUInteger)notesVersionForDeviceInfo:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMigrationDeviceInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif