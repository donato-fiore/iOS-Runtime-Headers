// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STASKFORTIMEREQUESTRECEIVEDUSERNOTIFICATIONCONTEXT_H
#define STASKFORTIMEREQUESTRECEIVEDUSERNOTIFICATIONCONTEXT_H

@class NSNumber, NSString;


#import "STUserNotificationContext.h"

@interface STAskForTimeRequestReceivedUserNotificationContext : STUserNotificationContext

@property (retain, nonatomic) NSNumber *childDSID; // ivar: _childDSID
@property (copy, nonatomic) NSString *childName; // ivar: _childName


+(BOOL)supportsSecureCoding;
-(id)initWithAskForTimeRequestIdentifier:(id)arg0 childName:(id)arg1 childDSID:(id)arg2 requestedResourceName:(id)arg3 ;
-(id)initWithAskForTimeRequestIdentifier:(id)arg0 familyMember:(id)arg1 requestedResourceName:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_fetchAndWriteFamilyPhotoURLIfNeeded:(id)arg0 ;
-(void)customizeNotificationContent:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif