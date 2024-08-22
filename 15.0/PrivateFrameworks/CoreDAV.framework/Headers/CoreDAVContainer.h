// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVCONTAINER_H
#define COREDAVCONTAINER_H

@class NSURL, NSDictionary, NSString, NSSet;

#import <Foundation/Foundation.h>

#import "CoreDAVResourceTypeItem.h"
#import "CoreDAVSupportedReportSetItem.h"

@interface CoreDAVContainer : NSObject

@property (retain, nonatomic) NSURL *addMemberURL; // ivar: _addMemberURL
@property (retain, nonatomic) NSDictionary *bulkRequests; // ivar: _bulkRequests
@property (retain, nonatomic) NSString *containerTitle; // ivar: _containerTitle
@property (readonly, nonatomic) BOOL hasBindPrivileges;
@property (readonly, nonatomic) BOOL hasReadPrivileges;
@property (readonly, nonatomic) BOOL hasUnbindPrivileges;
@property (readonly, nonatomic) BOOL hasWriteContentPrivileges;
@property (readonly, nonatomic) BOOL hasWritePropertiesPrivileges;
@property (readonly, nonatomic) BOOL isPrincipal;
@property (nonatomic) BOOL isUnauthenticated; // ivar: _isUnauthenticated
@property (retain, nonatomic) NSURL *owner; // ivar: _owner
@property (retain, nonatomic) NSSet *privileges; // ivar: _privileges
@property (readonly, nonatomic) NSSet *privilegesAsStringSet;
@property (retain, nonatomic) NSString *pushKey; // ivar: _pushKey
@property (retain, nonatomic) NSDictionary *pushTransports; // ivar: _pushTransports
@property (retain, nonatomic) NSString *quotaAvailable; // ivar: _quotaAvailable
@property (retain, nonatomic) NSString *quotaUsed; // ivar: _quotaUsed
@property (retain, nonatomic) NSURL *resourceID; // ivar: _resourceID
@property (retain, nonatomic) CoreDAVResourceTypeItem *resourceType; // ivar: _resourceType
@property (readonly, nonatomic) NSSet *resourceTypeAsStringSet;
@property (retain, nonatomic) CoreDAVSupportedReportSetItem *supportedReportSetItem; // ivar: _supportedReportSetItem
@property (readonly, nonatomic) NSSet *supportedReports;
@property (readonly, nonatomic) NSSet *supportedReportsAsStringSet;
@property (readonly, nonatomic) BOOL supportsPrincipalPropertySearchReport;
@property (readonly, nonatomic) BOOL supportsSyncCollectionReport;
@property (retain, nonatomic) NSString *syncToken; // ivar: _syncToken
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)convertPushTransportsForNSServerNotificationCenter:(id)arg0 ;
+(id)copyPropertyMappingsForParser;
-(BOOL)_anyPrivilegesMatches:(id)arg0 ;
-(id)description;
-(id)initWithURL:(id)arg0 andProperties:(id)arg1 ;
-(void)applyParsedProperties:(id)arg0 ;
-(void)postProcessWithResponseHeaders:(id)arg0 ;


@end


#endif