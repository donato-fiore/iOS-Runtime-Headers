// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DYGTDEVICEINFO_H
#define DYGTDEVICEINFO_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "DYGTGPUToolsVersionInfo.h"

@interface DYGTDeviceInfo : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *build; // ivar: _build
@property (copy, nonatomic) DYGTGPUToolsVersionInfo *gputoolsVersionInfo; // ivar: _gputoolsVersionInfo
@property (nonatomic) ? mainScreenDescriptor; // ivar: _mainScreenDescriptor
@property (copy, nonatomic) NSString *metalVersion; // ivar: _metalVersion
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) unsigned int nativePointerSize; // ivar: _nativePointerSize
@property (copy, nonatomic) NSString *permanentIdentifier; // ivar: _permanentIdentifier
@property (nonatomic) int platform; // ivar: _platform
@property (copy, nonatomic) NSString *productType; // ivar: _productType
@property (copy, nonatomic) NSArray *profiles; // ivar: _profiles
@property (nonatomic) NSUInteger runtimeIdentifier; // ivar: _runtimeIdentifier
@property (copy, nonatomic) NSString *version; // ivar: _version


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif