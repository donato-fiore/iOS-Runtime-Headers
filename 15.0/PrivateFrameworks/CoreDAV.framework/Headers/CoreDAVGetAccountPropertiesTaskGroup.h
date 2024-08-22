// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COREDAVGETACCOUNTPROPERTIESTASKGROUP_H
#define COREDAVGETACCOUNTPROPERTIESTASKGROUP_H

@class NSMutableSet, NSSet, NSString, NSURL;
@protocol CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate;


#import "CoreDAVTaskGroup.h"

@interface CoreDAVGetAccountPropertiesTaskGroup : CoreDAVTaskGroup <CoreDAVPropFindTaskDelegate, CoreDAVOptionsTaskDelegate, CoreDAVPrincipalSearchPropertySetTaskDelegate, CoreDAVTaskDelegate>

 {
    NSMutableSet *_redirectHistory;
}


@property (readonly, nonatomic) NSSet *collections; // ivar: _collections
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CoreDAVGetAccountPropertiesTaskGroupDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSSet *emailAddresses; // ivar: _emailAddresses
@property (nonatomic) BOOL fetchPrincipalSearchProperties; // ivar: _fetchPrincipalSearchProperties
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isExpandPropertyReportSupported; // ivar: _isExpandPropertyReportSupported
@property (readonly, nonatomic) NSSet *principalSearchProperties; // ivar: _principalSearchProperties
@property (readonly, nonatomic) NSURL *principalURL; // ivar: _principalURL
@property (readonly, nonatomic) NSURL *resourceID; // ivar: _resourceID
@property (nonatomic) BOOL shouldIgnoreHomeSetOnDifferentHost; // ivar: _shouldIgnoreHomeSetOnDifferentHost
@property (readonly) Class superclass;


-(BOOL)forceOptionsRequest;
-(id)_copyAccountPropertiesPropFindElements;
-(id)homeSet;
-(id)initWithAccountInfoProvider:(id)arg0 taskManager:(id)arg1 ;
-(void)_setPropertiesFromParsedResponses:(id)arg0 ;
-(void)_taskCompleted:(id)arg0 withError:(id)arg1 ;
-(void)coaxServerForPrincipalHeaders;
-(void)processPrincipalHeaders:(id)arg0 ;
-(void)propFindTask:(id)arg0 parsedResponses:(id)arg1 error:(id)arg2 ;
-(void)searchPropertySetTask:(id)arg0 completetWithPropertySearchSet:(id)arg1 error:(id)arg2 ;
-(void)startTaskGroup;
-(void)task:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)taskGroupWillCancelWithError:(id)arg0 ;


@end


#endif