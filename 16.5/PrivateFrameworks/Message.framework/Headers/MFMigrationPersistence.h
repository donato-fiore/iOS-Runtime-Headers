// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFMIGRATIONPERSISTENCE_H
#define MFMIGRATIONPERSISTENCE_H

@class NSString;
@protocol MFUserAgent;

#import <Foundation/Foundation.h>


@interface MFMigrationPersistence : NSObject <MFUserAgent>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)migrateDatabaseAtPath:(id)arg0 ;
-(BOOL)canRegisterForAPSPush;
-(BOOL)canUseSpotlightIndex;
-(BOOL)isAllowedToAccessProtectedData;
-(BOOL)isForeground;
-(BOOL)isMaild;
-(BOOL)isMobileMail;
-(id)init;
-(void)autofetchAccount:(id)arg0 mailboxUid:(id)arg1 ;
-(void)networkActivityEnded:(id)arg0 ;
-(void)networkActivityStarted:(id)arg0 ;


@end


#endif