// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIDOWNLOADNOTIFICATION_H
#define TRIDOWNLOADNOTIFICATION_H

@class NSString, NSError;
@protocol TRIDownloadNotificationProtocol;

#import <Foundation/Foundation.h>


@interface TRIDownloadNotification : NSObject <TRIDownloadNotificationProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger progress; // ivar: _progress
@property (readonly, nonatomic) NSUInteger progressMaxValue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)_errorIsInsufficientDiskSpaceCloudKitError:(id)arg0 ;
+(BOOL)_notifyDownloadUpdateForKey:(id)arg0 withState:(NSUInteger)arg1 ;
+(BOOL)notifyDownloadCompletedForKey:(id)arg0 ;
+(BOOL)notifyDownloadFailedForKey:(id)arg0 withCloudKitError:(id)arg1 ;
+(BOOL)notifyDownloadFailedForKey:(id)arg0 withError:(NSUInteger)arg1 ;
+(BOOL)notifyDownloadProgressForKey:(id)arg0 withProgress:(NSUInteger)arg1 ;
+(BOOL)notifyDownloadStalledForKey:(id)arg0 withProgress:(NSUInteger)arg1 ;
+(id)_descriptionForErrorCode:(NSUInteger)arg0 ;
+(id)_dispatchQueue;
+(id)_notificationWithState:(NSUInteger)arg0 ;
+(id)immediateDownloadNotificationKeyForNamespaceNames:(id)arg0 ;
+(id)notificationNameForKey:(id)arg0 ;
+(id)registerDownloadNotificationForKey:(id)arg0 queue:(id)arg1 usingBlock:(id)arg2 ;
+(void)deregisterNotificationWithToken:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 progress:(NSUInteger)arg1 error:(id)arg2 ;


@end


#endif