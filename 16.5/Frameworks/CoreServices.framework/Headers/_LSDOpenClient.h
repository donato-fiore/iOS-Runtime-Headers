// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _LSDOPENCLIENT_H
#define _LSDOPENCLIENT_H

@class LSDClient;
@protocol _LSDOpenProtocol;



@interface _LSDOpenClient : LSDClient <_LSDOpenProtocol>





-(void)canOpenURL:(id)arg0 publicSchemes:(BOOL)arg1 privateSchemes:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)failedToOpenApplication:(id)arg0 withURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)getURLOverrideForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)getiCloudHostNamesWithCompletionHandler:(id)arg0 ;
-(void)openAppLink:(id)arg0 state:(id)arg1 completionHandler:(id)arg2 ;
-(void)openApplicationWithIdentifier:(id)arg0 options:(id)arg1 useClientProcessHandle:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)openURL:(id)arg0 fileHandle:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(void)openUserActivityWithUniqueIdentifier:(id)arg0 activityData:(id)arg1 activityType:(id)arg2 bundleIdentifier:(id)arg3 options:(id)arg4 completionHandler:(id)arg5 ;
-(void)performOpenOperationWithURL:(id)arg0 fileHandle:(id)arg1 bundleIdentifier:(id)arg2 documentIdentifier:(id)arg3 isContentManaged:(BOOL)arg4 sourceAuditToken:(struct ? *)arg5 userInfo:(id)arg6 options:(id)arg7 delegate:(id)arg8 completionHandler:(id)arg9 ;
-(void)willHandleInvocation:(id)arg0 isReply:(BOOL)arg1 ;


@end


#endif