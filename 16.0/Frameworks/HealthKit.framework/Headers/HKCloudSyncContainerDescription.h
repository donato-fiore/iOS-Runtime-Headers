// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLOUDSYNCCONTAINERDESCRIPTION_H
#define HKCLOUDSYNCCONTAINERDESCRIPTION_H

@class NSString, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKCloudSyncContainerDescription : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (readonly, copy, nonatomic) NSArray *databaseDescriptions; // ivar: _databaseDescriptions
@property (readonly, copy, nonatomic) NSString *deviceIdentifier; // ivar: _deviceIdentifier


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContainerIdentifier:(id)arg0 deviceIdentifier:(id)arg1 databaseDescriptions:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif