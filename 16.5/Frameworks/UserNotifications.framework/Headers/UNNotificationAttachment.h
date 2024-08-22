// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UNNOTIFICATIONATTACHMENT_H
#define UNNOTIFICATIONATTACHMENT_H

@class NSURL, NSString;
@protocol UNNotificationSecurityScopeProviding, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UNSecurityScopedURL.h"
#import "UNNotificationAttachmentOptions.h"

@interface UNNotificationAttachment : NSObject <UNNotificationSecurityScopeProviding, NSCopying, NSSecureCoding>

 {
    UNSecurityScopedURL *_securityScopedURL;
    os_unfair_lock_s _securityScopeLock;
}


@property (readonly, copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUInteger family;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) UNNotificationAttachmentOptions *options; // ivar: _options
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)attachmentWithIdentifier:(id)arg0 URL:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 URL:(id)arg1 type:(id)arg2 options:(id)arg3 ;
-(id)initWithIdentifier:(id)arg0 family:(NSUInteger)arg1 URL:(id)arg2 type:(id)arg3 options:(id)arg4 ;
-(void)_withSecurityScopeLock:(id)arg0 ;
-(void)addSecurityScope:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enterSecurityScope;
-(void)leaveSecurityScope;
-(void)removeSecurityScope;


@end


#endif