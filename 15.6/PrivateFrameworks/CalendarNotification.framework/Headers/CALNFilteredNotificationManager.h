// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CALNFILTEREDNOTIFICATIONMANAGER_H
#define CALNFILTEREDNOTIFICATIONMANAGER_H

@class NSString;
@protocol CALNNotificationManager;

#import <Foundation/Foundation.h>


@interface CALNFilteredNotificationManager : NSObject <CALNNotificationManager>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isProtectedDataAvailable;
@property (readonly, nonatomic) id *predicate; // ivar: _predicate
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<CALNNotificationManager> *wrappedNotificationManager; // ivar: _wrappedNotificationManager


-(id)fetchRecordsWithSourceIdentifier:(id)arg0 ;
-(id)initWithWrappedNotificationManager:(id)arg0 predicate:(id)arg1 ;
-(void)addRecord:(id)arg0 ;
-(void)removeRecordWithSourceIdentifier:(id)arg0 sourceClientIdentifier:(id)arg1 ;
-(void)updateRecord:(id)arg0 ;


@end


#endif