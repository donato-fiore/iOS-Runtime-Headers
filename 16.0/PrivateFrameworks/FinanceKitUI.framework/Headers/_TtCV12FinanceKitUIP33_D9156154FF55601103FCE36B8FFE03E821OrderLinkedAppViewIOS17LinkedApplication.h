// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTCV12FINANCEKITUIP33_D9156154FF55601103FCE36B8FFE03E821ORDERLINKEDAPPVIEWIOS17LINKEDAPPLICATION_H
#define _TTCV12FINANCEKITUIP33_D9156154FF55601103FCE36B8FFE03E821ORDERLINKEDAPPVIEWIOS17LINKEDAPPLICATION_H

@class PKLinkedApplication;



@interface _TtCV12FinanceKitUIP33_D9156154FF55601103FCE36B8FFE03E821OrderLinkedAppViewIOS17LinkedApplication : PKLinkedApplication



-(id)init;
-(id)initWithApplicationIdentifiers:(id)arg0 storeIDs:(id)arg1 defaultLaunchURL:(id)arg2 ;
-(id)initWithPass:(id)arg0 ;
-(id)initWithStoreIDs:(id)arg0 defaultLaunchURL:(id)arg1 ;
-(id)initWithStoreIDs:(id)arg0 systemAppBundleIdentifiers:(id)arg1 defaultLaunchURL:(id)arg2 ;
-(void)openApplication:(id)arg0 withLaunchOptions:(NSUInteger)arg1 launchURL:(id)arg2 ;


@end


#endif