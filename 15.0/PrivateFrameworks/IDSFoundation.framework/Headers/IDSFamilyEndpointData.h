// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSFAMILYENDPOINTDATA_H
#define IDSFAMILYENDPOINTDATA_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSFamilyEndpointData : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *buildVersion; // ivar: _buildVersion
@property (retain, nonatomic) NSString *deviceColor; // ivar: _deviceColor
@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (nonatomic) NSInteger deviceType; // ivar: _deviceType
@property (retain, nonatomic) NSString *deviceUniqueID; // ivar: _deviceUniqueID


+(BOOL)supportsSecureCoding;
-(id)debugDescription;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceName:(id)arg0 privateDeviceData:(id)arg1 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif