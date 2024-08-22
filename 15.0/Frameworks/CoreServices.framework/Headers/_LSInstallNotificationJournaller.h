// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LSINSTALLNOTIFICATIONJOURNALLER_H
#define _LSINSTALLNOTIFICATIONJOURNALLER_H

@class NSString, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _LSInstallNotificationJournaller : NSObject <NSSecureCoding>

 {
    BOOL _preliminary;
    NSString *_primaryBundleID;
    NSMutableArray *_journalledNotifications;
    NSUInteger _operationType;
    CGFloat _timestamp;
}




+(BOOL)shouldJournalNotificationType:(int)arg0 ;
+(BOOL)supportsSecureCoding;
+(void)createInstallJournalDirectoryIfRequired;
-(BOOL)applicableForCurrentDatabase;
-(BOOL)entityExists;
-(BOOL)isApplicationRegisteredWithbundleID:(id)arg0 placeholder:(BOOL)arg1 ;
-(BOOL)shouldExpectEntityToExist;
-(CGFloat)timestamp;
-(NSUInteger)installOperation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPrimaryBundleID:(id)arg0 operation:(NSUInteger)arg1 ;
-(id)journalURL;
-(id)journalledNotifications;
-(id)primaryBundleID;
-(id)synthesizedPreliminaryJournalledNotifications;
-(void)_writeJournalUnconditionally;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeJournalAfterNotificationFence;
-(void)removeJournalFile;
-(void)sendNotification:(int)arg0 forApps:(id)arg1 withPlugins:(BOOL)arg2 ;
-(void)sendNotification:(int)arg0 forApps:(id)arg1 withPlugins:(BOOL)arg2 options:(id)arg3 ;
-(void)setPrimaryBundleID:(id)arg0 ;
-(void)writeFinalJournal;
-(void)writePreliminaryJournal;


@end


#endif