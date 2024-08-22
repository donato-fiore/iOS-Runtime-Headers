// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKCLASSROOMINSTALLATION_H
#define CRKCLASSROOMINSTALLATION_H

@class NSString, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CRKClassroomInstallation : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSString *classroomBundleIdentifier; // ivar: _classroomBundleIdentifier
@property (readonly, nonatomic) NSURL *classroomURL; // ivar: _classroomURL
@property (readonly, copy, nonatomic) NSString *instructorKitImagePath; // ivar: _instructorKitImagePath
@property (readonly, copy, nonatomic) NSString *instructordBundleIdentifier; // ivar: _instructordBundleIdentifier


+(BOOL)anyInstallationExists;
+(id)iOSInstallation;
+(id)installationWithClassroomBundleIdentifier:(id)arg0 bundleHasContentsFolder:(BOOL)arg1 instructordBundleIdentifier:(id)arg2 ;
+(id)instructorKitImagePathInBundle:(id)arg0 hasContentsFolder:(BOOL)arg1 ;
+(id)macOSInstallation;
+(id)preferredInstallation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithClassroomURL:(id)arg0 classroomBundleIdentifier:(id)arg1 instructorKitImagePath:(id)arg2 instructordBundleIdentifier:(id)arg3 ;


@end


#endif