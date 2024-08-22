// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDAPPLICATIONID_H
#define CKDAPPLICATIONID_H

@class NSString;
@protocol NSCopying, CKSQLiteItem;

#import <Foundation/Foundation.h>


@interface CKDApplicationID : NSObject <NSCopying, CKSQLiteItem>



@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifier; // ivar: _applicationBundleIdentifier
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForContainerAccess; // ivar: _applicationBundleIdentifierOverrideForContainerAccess
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForNetworkAttribution; // ivar: _applicationBundleIdentifierOverrideForNetworkAttribution
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForPushTopicGeneration; // ivar: _applicationBundleIdentifierOverrideForPushTopicGeneration
@property (readonly, copy, nonatomic) NSString *applicationBundleIdentifierOverrideForTCC; // ivar: _applicationBundleIdentifierOverrideForTCC
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