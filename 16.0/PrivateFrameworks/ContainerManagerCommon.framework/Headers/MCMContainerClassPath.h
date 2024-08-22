// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMCONTAINERCLASSPATH_H
#define MCMCONTAINERCLASSPATH_H

@class NSURL, NSString;
@protocol MCMContainerPathHasComponents, NSCopying;

#import <Foundation/Foundation.h>

#import "MCMPOSIXUser.h"
#import "MCMUserIdentity.h"

@interface MCMContainerClassPath : NSObject <MCMContainerPathHasComponents, NSCopying>

 {
    BOOL _caseSensitive;
    BOOL _caseSensitiveDetermined;
    BOOL _supportsDataProtection;
    BOOL _supportsDataProtectionDetermined;
    BOOL _classURLCreated;
    BOOL _symlinkClassURLCreated;
    NSURL *_homeDirectoryURL;
}


@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic, getter=isCaseSensitive) BOOL caseSensitive;
@property (readonly, nonatomic) NSString *categoryComponent; // ivar: _categoryComponent
@property (readonly, nonatomic) NSURL *categoryURL; // ivar: _categoryURL
@property (readonly, nonatomic) NSString *classComponent; // ivar: _classComponent
@property (readonly, nonatomic) NSURL *classURL; // ivar: _classURL
@property (readonly, nonatomic) NSUInteger containerClass; // ivar: _containerClass
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL exists; // ivar: _exists
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) unsigned short posixMode; // ivar: _posixMode
@property (readonly, nonatomic) MCMPOSIXUser *posixOwner; // ivar: _posixOwner
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsDataProtection;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity; // ivar: _userIdentity


+(BOOL)_inLibraryRepairBlock_createURLIfNecessary:(id)arg0 mode:(unsigned short)arg1 owner:(id)arg2 dataProtectionClass:(int)arg3 exists:(*BOOL)arg4 error:(*id)arg5 ;
+(id)_baseURLForUserIdentity:(id)arg0 ;
+(id)_baseURLForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 ;
+(id)_categoryComponentForContainerClass:(NSUInteger)arg0 ;
+(id)_classComponentForContainerClass:(NSUInteger)arg0 ;
+(id)containerPathForContainerIdentity:(id)arg0 ;
+(id)containerPathForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 ;
+(id)containerPathTypeClasses;
+(id)posixOwnerForContainerClass:(NSUInteger)arg0 user:(id)arg1 ;
+(unsigned short)_modeForContainerClass:(NSUInteger)arg0 ;
-(BOOL)_createURLIfNecessary:(id)arg0 mode:(unsigned short)arg1 owner:(id)arg2 dataProtectionClass:(int)arg3 error:(*id)arg4 ;
-(BOOL)_obj1:(id)arg0 isEqualToObj2:(id)arg1 ;
-(BOOL)createIfNecessaryWithError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContainerClassPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithBaseURL:(id)arg0 categoryComponent:(id)arg1 classComponent:(id)arg2 containerClass:(NSUInteger)arg3 POSIXOwner:(id)arg4 POSIXMode:(unsigned short)arg5 userIdentity:(id)arg6 ;


@end


#endif