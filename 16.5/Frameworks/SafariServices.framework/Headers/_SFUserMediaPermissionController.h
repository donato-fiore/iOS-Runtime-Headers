// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SFUSERMEDIAPERMISSIONCONTROLLER_H
#define _SFUSERMEDIAPERMISSIONCONTROLLER_H

@class WBSUserMediaPermissionController;



@interface _SFUserMediaPermissionController : WBSUserMediaPermissionController



// -(void)_didRetrieveUserMediaPermission:(NSUInteger)arg0 forDevices:(NSUInteger)arg1 url:(id)arg2 mainFrameURL:(id)arg3 decisionHandler:(id)arg4 dialogPresenter:(unk)arg5  ;
-(void)coalescedAsynchronousWriter:(id)arg0 didFinishWritingData:(id)arg1 ;
// -(void)requestUserMediaAuthorizationForDevices:(NSUInteger)arg0 url:(id)arg1 mainFrameURL:(id)arg2 decisionHandler:(id)arg3 dialogPresenter:(unk)arg4  ;
-(void)savePendingChanges;


@end


#endif