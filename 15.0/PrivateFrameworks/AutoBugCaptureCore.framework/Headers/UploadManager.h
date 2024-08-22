// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPLOADMANAGER_H
#define UPLOADMANAGER_H

@class NSMutableArray, NSString;
@protocol UploadSessionDelegate;

#import <Foundation/Foundation.h>


@interface UploadManager : NSObject <UploadSessionDelegate>

 {
    NSMutableArray *_uploadSessions;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)reportAWDMetricForUploadSession:(id)arg0 requestState:(short)arg1 preflightStatus:(short)arg2 userConsentStatus:(short)arg3 ;
-(void)reportFailureAWDMetricWithIdentifier:(id)arg0 radar:(NSInteger)arg1 urgency:(NSInteger)arg2 requestTime:(id)arg3 preflightStatus:(short)arg4 userConsentStatus:(short)arg5 apnsIdentifier:(NSUInteger)arg6 fileInfo:(id)arg7 ;
-(void)uploadFiles:(id)arg0 to:(id)arg1 identifier:(id)arg2 urgency:(NSInteger)arg3 extraHTTPHeaders:(id)arg4 context:(id)arg5 ;
-(void)uploadFiles:(id)arg0 toRadar:(id)arg1 identifier:(id)arg2 urgency:(NSInteger)arg3 extraHTTPHeaders:(id)arg4 context:(id)arg5 ;
-(void)uploadFiles:(id)arg0 toURL:(id)arg1 toRadar:(id)arg2 identifier:(id)arg3 urgency:(NSInteger)arg4 extraHTTPHeaders:(id)arg5 context:(id)arg6 ;
-(void)uploadSessionCompleted:(id)arg0 ;
-(void)uploadSessionFailed:(id)arg0 ;


@end


#endif