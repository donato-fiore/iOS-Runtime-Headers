// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XBAPPLICATIONLAUNCHCOMPATIBILITYINFO_H
#define XBAPPLICATIONLAUNCHCOMPATIBILITYINFO_H

@class NSString, NSArray;
@protocol BSXPCCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "XBLaunchInterface.h"

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSSecureCoding>

 {
    XBLaunchInterface *_defaultInterface;
}


@property (readonly, nonatomic) BOOL allowsSavingLaunchImages;
@property (nonatomic) NSInteger badLaunchImageCandidateCount; // ivar: _badLaunchImageCandidateCount
@property (copy, nonatomic) NSString *bundleContainerPath; // ivar: _bundleContainerPath
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSString *bundlePath; // ivar: _bundlePath
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultGroupIdentifier; // ivar: _defaultGroupIdentifier
@property (readonly, copy, nonatomic) XBLaunchInterface *defaultLaunchInterface;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasKnownBadLaunchImage; // ivar: _hasKnownBadLaunchImage
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *launchInterfaces; // ivar: _launchInterfaces
@property (nonatomic) BOOL launchesOpaque; // ivar: _launchesOpaque
@property (copy, nonatomic) NSString *sandboxPath; // ivar: _sandboxPath
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)compatibilityInfoForAppInfo:(id)arg0 ;
-(BOOL)launchInterfaceExistsForScheme:(id)arg0 ;
-(id)initWithBundle:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithXPCDictionary:(id)arg0 ;
-(id)launchInterfaceIdentifierForRequest:(id)arg0 ;
-(id)launchInterfaceWithIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)encodeWithXPCDictionary:(id)arg0 ;


@end


#endif