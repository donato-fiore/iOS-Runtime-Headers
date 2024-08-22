// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALDAVACCOUNTPROPERTYREFRESHOPERATION_H
#define CALDAVACCOUNTPROPERTYREFRESHOPERATION_H

@protocol OS_dispatch_group, CalDAVAccountPropertyRefreshDelegate;


#import "CalDAVOperation.h"

@interface CalDAVAccountPropertyRefreshOperation : CalDAVOperation {
    NSObject<OS_dispatch_group> *_defaultAlarmGroup;
}


@property (nonatomic) NSObject<CalDAVAccountPropertyRefreshDelegate> *delegate;
@property (nonatomic) BOOL fetchPrincipalSearchProperties; // ivar: _fetchPrincipalSearchProperties


-(id)initWithPrincipal:(id)arg0 ;
-(id)propPatchForProperty:(id)arg0 value:(id)arg1 ;
-(void)_reallyRefreshProperties;
-(void)getAccountPropertiesTask:(id)arg0 completedWithError:(id)arg1 ;
-(void)refreshProperties;
-(void)sendLocallyChangedPropertiesIfNeeded;


@end


#endif