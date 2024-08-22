// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCONTAINERPATH_H
#define MCMCONTAINERPATH_H

@class NSURL, NSString;
@protocol MCMContainerPathHasComponents;

#import <Foundation/Foundation.h>

#import "MCMContainerClassPath.h"
#import "MCMPOSIXUser.h"
#import "MCMUserIdentity.h"

@interface MCMContainerPath : NSObject <MCMContainerPathHasComponents>



@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSURL *categoryURL;
@property (readonly, nonatomic) NSURL *classURL;
@property (readonly, nonatomic) NSUInteger containerClass;
@property (readonly, nonatomic) MCMContainerClassPath *containerClassPath; // ivar: _containerClassPath
@property (readonly, nonatomic) NSString *containerDataComponent; // ivar: _containerDataComponent
@property (readonly, nonatomic) NSURL *containerDataURL;
@property (readonly, nonatomic) NSString *containerPathIdentifier; // ivar: _containerPathIdentifier
@property (readonly, nonatomic) NSString *containerRootComponent; // ivar: _containerRootComponent
@property (readonly, nonatomic) NSURL *containerRootURL;
@property (readonly, nonatomic) unsigned short dataPOSIXMode; // ivar: _dataPOSIXMode
@property (readonly, nonatomic) MCMPOSIXUser *dataPOSIXOwner; // ivar: _dataPOSIXOwner
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL exists; // ivar: _exists
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURL *metadataURL;
@property (readonly, nonatomic, getter=isRandomized) BOOL randomized;
@property (readonly, nonatomic) unsigned short rootPOSIXMode; // ivar: _rootPOSIXMode
@property (readonly, nonatomic) MCMPOSIXUser *rootPOSIXOwner; // ivar: _rootPOSIXOwner
@property (readonly, nonatomic) unsigned short schemaPOSIXMode; // ivar: _schemaPOSIXMode
@property (readonly, nonatomic) MCMPOSIXUser *schemaPOSIXOwner; // ivar: _schemaPOSIXOwner
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) MCMUserIdentity *userIdentity;


+(id)_posixOwnerForContainerSubdirectories:(NSUInteger)arg0 user:(id)arg1 ;
+(id)containerPathForContainerClassPath:(id)arg0 containerPathIdentifier:(id)arg1 ;
+(id)containerPathForContainerIdentity:(id)arg0 containerPathIdentifier:(id)arg1 ;
+(id)containerPathForUserIdentity:(id)arg0 containerClass:(NSUInteger)arg1 containerPathIdentifier:(id)arg2 ;
+(id)containerPathFromURL:(id)arg0 containerClassPath:(id)arg1 relativePath:(*id)arg2 ;
+(id)containerPathIdentifierForCodeSignIdentifier:(id)arg0 containerClass:(NSUInteger)arg1 ;
-(BOOL)_createURLIfNecessary:(id)arg0 mode:(unsigned short)arg1 owner:(id)arg2 dataProtectionClass:(int)arg3 exists:(*BOOL)arg4 error:(*id)arg5 ;
-(BOOL)_obj1:(id)arg0 isEqualToObj2:(id)arg1 ;
-(BOOL)createDataURLIfNecessaryWithDataProtectionClass:(int)arg0 error:(*id)arg1 ;
-(BOOL)createIfNecessaryWithDataProtectionClass:(int)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToContainerPath:(id)arg0 ;
-(id)containerPathForRealPath;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithContainerClassPath:(id)arg0 containerPathIdentifier:(id)arg1 containerRootComponent:(id)arg2 containerDataComponent:(id)arg3 ;


@end


#endif