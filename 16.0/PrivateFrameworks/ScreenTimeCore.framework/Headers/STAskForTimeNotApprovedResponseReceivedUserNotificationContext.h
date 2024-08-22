// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STASKFORTIMENOTAPPROVEDRESPONSERECEIVEDUSERNOTIFICATIONCONTEXT_H
#define STASKFORTIMENOTAPPROVEDRESPONSERECEIVEDUSERNOTIFICATIONCONTEXT_H

@class NSString;


#import "STUserNotificationContext.h"

@interface STAskForTimeNotApprovedResponseReceivedUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *parentName; // ivar: _parentName
@property (copy, nonatomic) NSString *requestedResourceName; // ivar: _requestedResourceName


+(BOOL)supportsSecureCoding;
-(id)initWithAskForTimeRequestIdentifier:(id)arg0 parentName:(id)arg1 requestedResourceName:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)customizeNotificationContent:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif