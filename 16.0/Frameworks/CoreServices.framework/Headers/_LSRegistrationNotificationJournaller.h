// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LSREGISTRATIONNOTIFICATIONJOURNALLER_H
#define _LSREGISTRATIONNOTIFICATIONJOURNALLER_H

@class LSInstallNotificationJournaller;



@interface _LSRegistrationNotificationJournaller : LSInstallNotificationJournaller {
    BOOL _placeholder;
}




+(BOOL)supportsSecureCoding;
-(BOOL)entityExists;
-(BOOL)shouldExpectEntityToExist;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimaryBundleID:(id)arg0 placeholder:(BOOL)arg1 ;
-(id)synthesizedPreliminaryJournalledNotifications;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif