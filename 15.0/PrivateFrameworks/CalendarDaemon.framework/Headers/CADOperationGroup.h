// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CADOPERATIONGROUP_H
#define CADOPERATIONGROUP_H


#import <Foundation/Foundation.h>

#import "ClientConnection.h"

@interface CADOperationGroup : NSObject

@property (readonly, nonatomic) ClientConnection *conn; // ivar: _conn


+(BOOL)requiresEventAccess;
+(BOOL)requiresEventOrReminderAccess;
+(BOOL)requiresReminderAccess;
+(id)whitelistedBundles;
-(BOOL)accessGrantedToPerformSelector:(SEL)arg0 ;
-(id)initWithClientConnection:(id)arg0 ;


@end


#endif