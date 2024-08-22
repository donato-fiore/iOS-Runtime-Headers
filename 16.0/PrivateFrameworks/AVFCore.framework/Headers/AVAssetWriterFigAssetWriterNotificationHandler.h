// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVASSETWRITERFIGASSETWRITERNOTIFICATIONHANDLER_H
#define AVASSETWRITERFIGASSETWRITERNOTIFICATIONHANDLER_H

@protocol AVAssetWriterFigAssetWriterNotificationHandlerDelegate;

#import <Foundation/Foundation.h>

#import "AVWeakReference.h"

@interface AVAssetWriterFigAssetWriterNotificationHandler : NSObject {
    *OpaqueFigAssetWriter _figAssetWriter;
    int _didNotCallDelegate;
    AVWeakReference *_weakReferenceToSelf;
    int _notificationHandlersAreRegistered;
}


@property (weak) NSObject<AVAssetWriterFigAssetWriterNotificationHandlerDelegate> *delegate;
@property (retain, getter=_weakReferenceToDelegate, setter=_setWeakReferenceToDelegate:) AVWeakReference *weakReferenceToDelegate; // ivar: _weakReferenceToDelegate


-(id)initWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 ;
-(void)_callDelegateIfNotCalledWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)_handleCompletedWritingNotification;
-(void)_handleFailedNotificationWithError:(id)arg0 ;
-(void)_handleServerDiedNotification;
-(void)_teardownNotificationHandlers;
-(void)dealloc;


@end


#endif