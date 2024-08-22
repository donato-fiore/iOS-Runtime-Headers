// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASDSOFTWAREUPDATE_H
#define ASDSOFTWAREUPDATE_H

@class NSArray, NSString, NSNumber, NSDate, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSArray *blockedBy; // ivar: _blockedBy
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) NSString *buyParams;
@property (nonatomic) NSInteger deviceFamilies; // ivar: _deviceFamilies
@property (nonatomic, getter=isDownloaded) BOOL downloaded; // ivar: _downloaded
@property (readonly, nonatomic) NSNumber *externalVersionIdentifier;
@property (nonatomic, getter=isIOSBinaryMacOSCompatible) BOOL iOSBinaryMacOSCompatible; // ivar: _iOSBinaryMacOSCompatible
@property (copy, nonatomic) NSDate *installDate; // ivar: _installDate
@property (copy, nonatomic) NSDictionary *metrics; // ivar: _metrics
@property (readonly, nonatomic) NSInteger parentalControlsRank;
@property (nonatomic, getter=isPerDevice) BOOL perDevice; // ivar: _perDevice
@property (nonatomic, getter=isProfileValidated) BOOL profileValidated; // ivar: _profileValidated
@property (readonly, nonatomic) NSDictionary *rawUpdateDictionary; // ivar: _rawUpdateDictionary
@property (nonatomic) NSInteger rawUpdateState; // ivar: _rawUpdateState
@property (readonly, nonatomic) BOOL requiresRosetta; // ivar: _requiresRosetta
@property (readonly, nonatomic) BOOL runsOnAppleSilicon; // ivar: _runsOnAppleSilicon
@property (readonly, nonatomic) BOOL runsOnIntel; // ivar: _runsOnIntel
@property (readonly, nonatomic) NSInteger storeItemIdentifier;
@property (copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSDictionary *updateDictionary;
@property (nonatomic) NSInteger updateState; // ivar: _updateState


+(BOOL)supportsSecureCoding;
-(BOOL)_boolValueForProperty:(id)arg0 withDefaultValue:(BOOL)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUpdateDictionary:(id)arg0 ;
-(id)releaseDate;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif