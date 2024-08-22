// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHATTRIBUTION_H
#define SHATTRIBUTION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SHAttribution : NSObject

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *containingAppBundleIdentifier;
@property (readonly, copy, nonatomic) NSString *productName;
@property (readonly, copy, nonatomic) NSString *teamIdentifier; // ivar: _teamIdentifier


+(BOOL)requiresMediaLibraryAttributionForBundleIdentifier:(id)arg0 ;
+(BOOL)requiresStaticSensorActivityAttributionForBundleIdentifier:(id)arg0 ;
+(id)mediaLibraryAttributionExceptionPlist;
+(id)productNameForBundleIdentifier:(id)arg0 ;
+(id)staticSensorActivityAttributionExceptionPlist;
-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(void)configureAttributionForConnection:(id)arg0 ;
-(void)configureAttributionForTask:(struct __SecTask *)arg0 ;


@end


#endif