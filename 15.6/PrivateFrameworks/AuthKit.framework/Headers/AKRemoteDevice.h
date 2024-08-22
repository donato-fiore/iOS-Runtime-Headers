// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKREMOTEDEVICE_H
#define AKREMOTEDEVICE_H

@class NSDictionary, NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AKRemoteDevice : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDictionary *additionalInfo; // ivar: _additionalInfo
@property (readonly, copy, nonatomic) NSString *backingColorCode; // ivar: _backingColorCode
@property (readonly, copy, nonatomic) NSString *buildNumber; // ivar: _buildNumber
@property (readonly, copy, nonatomic) NSString *colorCode; // ivar: _colorCode
@property (readonly, copy, nonatomic) NSString *coverGlassColorCode; // ivar: _coverGlassColorCode
@property (readonly, copy, nonatomic) NSString *enclosureColorCode; // ivar: _enclosureColorCode
@property (readonly, copy, nonatomic) NSString *housingColorCode; // ivar: _housingColorCode
@property (readonly, nonatomic) BOOL inCircle; // ivar: _inCircle
@property (readonly, copy, nonatomic) NSDate *lastUpdatedDate; // ivar: _lastUpdatedDate
@property (readonly, copy, nonatomic) NSString *machineId; // ivar: _machineId
@property (readonly, copy, nonatomic) NSString *model; // ivar: _model
@property (readonly, copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, copy, nonatomic) NSString *operatingSystemName; // ivar: _operatingSystemName
@property (readonly, copy, nonatomic) NSString *operatingSystemVersion; // ivar: _operatingSystemVersion
@property (readonly, copy, nonatomic) NSString *serialNumber; // ivar: _serialNumber
@property (readonly, nonatomic) BOOL trusted; // ivar: _trusted


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInfo:(id)arg0 ;
-(void)_initWithInfo:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif