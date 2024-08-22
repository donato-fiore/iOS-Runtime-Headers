// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSSTARTUPJOURNALLEDDATABASEREBUILTNOTIFICATION_H
#define _LSSTARTUPJOURNALLEDDATABASEREBUILTNOTIFICATION_H

@class NSString;
@protocol _LSStartupJournalledNotification;

#import <Foundation/Foundation.h>


@interface _LSStartupJournalledDatabaseRebuiltNotification : NSObject <_LSStartupJournalledNotification>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedNotification;
-(void)dispatchToObserver:(id)arg0 forInstallProgressService:(id)arg1 ;


@end


#endif