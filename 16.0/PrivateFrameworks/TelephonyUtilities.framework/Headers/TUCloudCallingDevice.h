// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TUCLOUDCALLINGDEVICE_H
#define TUCLOUDCALLINGDEVICE_H

@class NSArray, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface TUCloudCallingDevice : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic, getter=isDefaultPairedDevice) BOOL defaultPairedDevice; // ivar: _defaultPairedDevice
@property (copy, nonatomic) NSArray *linkedUserURIs; // ivar: _linkedUserURIs
@property (copy, nonatomic) NSString *modelIdentifier; // ivar: _modelIdentifier
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) BOOL supportsRestrictingSecondaryCalling; // ivar: _supportsRestrictingSecondaryCalling
@property (copy, nonatomic) NSString *uniqueID; // ivar: _uniqueID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif