// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSMIPACKAGEINSTALLCALL_H
#define LSMIPACKAGEINSTALLCALL_H

@class NSString, NSURL;
@protocol LSMIInstallCall;

#import <Foundation/Foundation.h>


@interface LSMIPackageInstallCall : NSObject <LSMIInstallCall>

 {
    NSString *_bundleID;
    NSURL *_packageURL;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isUninstall;
-(BOOL)validateEntitlementsOfConnection:(id)arg0 withOptions:(id)arg1 error:(*id)arg2 ;
-(id)bundleIdentifier;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBundleIdentifier:(id)arg0 packageURL:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)invokeWithOptions:(id)arg0 error:(*id)arg1 progressCallback:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif