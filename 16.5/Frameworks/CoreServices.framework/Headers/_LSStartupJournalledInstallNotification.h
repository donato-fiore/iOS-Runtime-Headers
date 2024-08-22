// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSSTARTUPJOURNALLEDINSTALLNOTIFICATION_H
#define _LSSTARTUPJOURNALLEDINSTALLNOTIFICATION_H

@class NSString, NSArray;
@protocol _LSStartupJournalledNotification;

#import <Foundation/Foundation.h>


@interface _LSStartupJournalledInstallNotification : NSObject <_LSStartupJournalledNotification>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int notification; // ivar: _notification
@property (readonly, nonatomic) BOOL plugins; // ivar: _plugins
@property (readonly, nonatomic) NSArray *proxies; // ivar: _proxies
@property (readonly) Class superclass;


-(id)initWithNotification:(int)arg0 appProxies:(id)arg1 plugins:(BOOL)arg2 ;
-(void)dispatchToObserver:(id)arg0 forInstallProgressService:(id)arg1 ;


@end


#endif