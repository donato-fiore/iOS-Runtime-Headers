// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC17COREODIESSENTIALS33ODISYSTEMNOTIFICATIONSESSIONPROXY_H
#define _TTC17COREODIESSENTIALS33ODISYSTEMNOTIFICATIONSESSIONPROXY_H

@class SwiftObject;
@protocol _TtP17CoreODIEssentials28ODISystemNotificationSession_;



@interface _TtC17CoreODIEssentials33ODISystemNotificationSessionProxy : SwiftObject <_TtP17CoreODIEssentials28ODISystemNotificationSession_>

 {
    ? connection;
    ? queue;
    ? jetsamTransaction;
}




-(void)appleAccountCreatedWithAccount:(id)arg0 completion:(id)arg1 ;
-(void)appleAccountDeletedWithAccount:(id)arg0 completion:(id)arg1 ;
-(void)appleAccountModifiedWithAccount:(id)arg0 oldAccount:(id)arg1 completion:(id)arg2 ;


@end


#endif