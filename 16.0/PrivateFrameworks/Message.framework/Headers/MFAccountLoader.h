// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFACCOUNTLOADER_H
#define MFACCOUNTLOADER_H


#import <Foundation/Foundation.h>


@interface MFAccountLoader : NSObject



+(BOOL)loadBundleForAccountClassString:(id)arg0 error:(*id)arg1 ;
+(Class)_accountClassForString:(id)arg0 error:(*id)arg1 ;
+(Class)accountClassForPersistentAccount:(id)arg0 error:(*id)arg1 ;
+(id)_accountClassStringWithPersistentAccount:(id)arg0 error:(*id)arg1 ;
+(id)_bundlePathForAccountClassString:(id)arg0 ;
+(id)accountWithAccountTypeIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)accountWithPersistentAccount:(id)arg0 error:(*id)arg1 ;


@end


#endif