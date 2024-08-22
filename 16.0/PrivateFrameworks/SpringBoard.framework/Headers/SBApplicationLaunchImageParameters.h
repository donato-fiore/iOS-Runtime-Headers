// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONLAUNCHIMAGEPARAMETERS_H
#define SBAPPLICATIONLAUNCHIMAGEPARAMETERS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SBApplicationLaunchImageParameters : NSObject

@property (readonly, copy, nonatomic) NSString *defaultPNGName; // ivar: _defaultPNGName
@property (readonly, copy, nonatomic) NSString *extension; // ivar: _extension
@property (readonly, nonatomic) NSInteger interfaceOrientation; // ivar: _interfaceOrientation
@property (readonly, copy, nonatomic) NSString *minOSVersionString; // ivar: _minOSVersionString
@property (readonly, nonatomic) CGSize size; // ivar: _size


+(id)launchImageParametersFromLaunchImagesInfo:(id)arg0 withBundleIdentifier:(id)arg1 isMonarchLinked:(BOOL)arg2 ;
+(id)validInfoPlistOrientationKeys;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;


@end


#endif