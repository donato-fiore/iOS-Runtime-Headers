// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRSPOSTERPATH_H
#define PRSPOSTERPATH_H

@class NSHashTable, NSURL, BSAuditToken, NSString;
@protocol BSInvalidatable, BSXPCSecureCoding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PRSServerPosterIdentity.h"

@interface PRSPosterPath : NSObject <BSInvalidatable, BSXPCSecureCoding, NSSecureCoding>

 {
    NSHashTable *_lock_allExtensions;
    NSURL *_sandboxExtensionURL;
    BSAuditToken *_sandboxExtensionAuditToken;
    NSInteger _lock_sandboxExtensionHandle;
    os_unfair_lock_s _lock;
    unsigned char _options;
    unsigned char _lock_validityExtensions;
    unsigned char _lock_validityExtensionsHigh;
    BOOL _lock_invalidated;
    BOOL _lock_purged;
}


@property (readonly, copy, nonatomic) NSURL *containerURL;
@property (readonly, copy, nonatomic) NSURL *contentsURL; // ivar: _contentsURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *descriptorIdentifier; // ivar: _descriptorIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) PRSServerPosterIdentity *serverIdentity; // ivar: _serverIdentity
@property (readonly) Class superclass;


+(BOOL)supportsBSXPCSecureCoding;
+(BOOL)supportsSecureCoding;
+(id)temporaryDescriptorPathWithIdentifier:(id)arg0 ;
+(id)temporaryPath;
+(void)_setDisableUniquing:(BOOL)arg0 ;
-(BOOL)ensureContentsURLIsReachableAndReturnError:(*id)arg0 ;
-(BOOL)isServerPosterPath;
-(BOOL)storeGalleryOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeUserInfo:(id)arg0 error:(*id)arg1 ;
-(NSInteger)compareDescriptorIdentifiers:(id)arg0 ;
-(id)extendContentsReadAccessToAuditToken:(id)arg0 error:(*id)arg1 ;
-(id)extendValidityForReason:(id)arg0 ;
-(id)init;
-(id)initWithBSXPCCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)loadGalleryOptionsWithError:(*id)arg0 ;
-(id)loadUserInfoWithError:(*id)arg0 ;
-(void)dealloc;
-(void)encodeWithBSXPCCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)invalidate;


@end


#endif