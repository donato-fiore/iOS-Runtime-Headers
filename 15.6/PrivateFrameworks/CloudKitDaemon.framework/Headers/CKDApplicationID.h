// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKDAPPLICATIONID_H
#define CKDAPPLICATIONID_H

@class NSString;
@protocol NSSecureCoding, NSCopying, CKSQLiteItem;

#import <Foundation/Foundation.h>


@interface CKDApplicationID : NSObject <NSSecureCoding, NSCopying, CKSQLiteItem>



@property (copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // ivar: _applicationBundleIdentifierOverrideForContainerAccess
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration; // ivar: _applicationBundleIdentifierOverrideForPushTopicGeneration
@property (copy, nonatomic) NSString *applicationBundleIdentifierOverrideForTCC; // ivar: _applicationBundleIdentifierOverrideForTCC
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg0 private:(BOOL)arg1 shouldExpand:(BOOL)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithApplicationBundleIdentifier:(id)arg0 ;
-(id)initWithApplicationBundleIdentifier:(id)arg0 applicationBundleIdentifierOverrideForContainerAccess:(id)arg1 applicationBundleIdentifierOverrideForNetworkAttribution:(id)arg2 applicationBundleIdentifierOverrideForPushTopicGeneration:(id)arg3 applicationBundleIdentifierOverrideForTCC:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSqliteRepresentation:(id)arg0 ;
-(id)sqliteRepresentation;
-(void)ck_bindInStatement:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif