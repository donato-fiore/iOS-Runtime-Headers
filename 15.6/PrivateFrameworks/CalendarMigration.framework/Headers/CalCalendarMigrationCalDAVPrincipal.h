// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALCALENDARMIGRATIONCALDAVPRINCIPAL_H
#define CALCALENDARMIGRATIONCALDAVPRINCIPAL_H

@class NSString, NSArray, NSURL, NSDictionary;
@protocol CDBAccountInfo;

#import <Foundation/Foundation.h>


@interface CalCalendarMigrationCalDAVPrincipal : NSObject <CDBAccountInfo>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *defaultCalendarPath; // ivar: _defaultCalendarPath
@property (nonatomic, getter=isDelegate) BOOL delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isExpandPropertyReportSupported) BOOL expandPropertyReportSupported; // ivar: _expandPropertyReportSupported
@property (retain, nonatomic) NSString *fullName; // ivar: _fullName
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *homePath; // ivar: _homePath
@property (retain, nonatomic) NSString *homePushKey; // ivar: _homePushKey
@property (retain, nonatomic) NSString *inboxPath; // ivar: _inboxPath
@property (retain, nonatomic) NSString *login; // ivar: _login
@property (retain, nonatomic) NSString *notificationCollectionPath; // ivar: _notificationCollectionPath
@property (retain, nonatomic) NSString *outboxPath; // ivar: _outboxPath
@property (retain, nonatomic) NSString *ownerUid; // ivar: _ownerUid
@property (retain, nonatomic) NSArray *preferredCalendarUserAddresses; // ivar: _preferredCalendarUserAddresses
@property (readonly, nonatomic) NSString *principalPath;
@property (retain, nonatomic) NSURL *principalURL; // ivar: _principalURL
@property (retain, nonatomic) NSDictionary *pushTransports; // ivar: _pushTransports
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uid; // ivar: _uid
@property (nonatomic, getter=isWritable) BOOL writable; // ivar: _writable


-(BOOL)_anyCalendarUserAddressIsEquivalentToURL:(id)arg0 ;
-(BOOL)addressIsAccountOwner:(id)arg0 ;
-(id)_absoluteURLStringWithBaseComponents:(id)arg0 andPath:(id)arg1 ;
-(id)_packedPreferredCalendarUserAddresses;
-(id)dictionaryForAccountProperties;
-(id)initWithUid:(id)arg0 ;


@end


#endif