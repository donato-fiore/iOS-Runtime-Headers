// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSMAGSAFEACCESSORYSTATUSOBSERVER_H
#define CSMAGSAFEACCESSORYSTATUSOBSERVER_H

@protocol NSObject, CSMagSafeAccessoryStatusProviding, CSMagSafeAccessoryStatusDelegate;

#import <Foundation/Foundation.h>


@interface CSMagSafeAccessoryStatusObserver : NSObject {
    id<NSObject> *_attachmentNotificationToken;
    id<NSObject> *_detachmentNotificationToken;
    id<NSObject> *_animationStatusNotificationToken;
    id<CSMagSafeAccessoryStatusProviding> *_statusProvider;
}


@property (weak, nonatomic) NSObject<CSMagSafeAccessoryStatusDelegate> *delegate; // ivar: _delegate


-(id)initWithCoverSheetContext:(id)arg0 ;
-(void)dealloc;
-(void)notifiedWithAccessoryAnimationStatusChanged;
-(void)notifiedWithAccessoryAttached;
-(void)notifiedWithAccessoryDetached;


@end


#endif