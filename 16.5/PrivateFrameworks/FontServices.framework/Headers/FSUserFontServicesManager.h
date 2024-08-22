// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FSUSERFONTSERVICESMANAGER_H
#define FSUSERFONTSERVICESMANAGER_H


#import <Foundation/Foundation.h>


@interface FSUserFontServicesManager : NSObject



+(id)_UserFontServicesConnection;
+(void)GSFontEnableOrDisablePersistentURLs:(id)arg0 forProfileFonts:(BOOL)arg1 enabled:(BOOL)arg2 suspend:(BOOL)arg3 withReply:(id)arg4 ;
+(void)GSFontRegisterPersistentURLs:(id)arg0 enabled:(BOOL)arg1 forProfileFonts:(BOOL)arg2 withReply:(id)arg3 ;
+(void)GSFontUnregisterPersistentURLs:(id)arg0 forProfileFonts:(BOOL)arg1 withReply:(id)arg2 ;


@end


#endif