// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMSHAREDMESSAGESENDINGUTILITIES_H
#define IMSHAREDMESSAGESENDINGUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMSharedMessageSendingUtilities : NSObject

@property NSInteger serviceAvailability; // ivar: _serviceAvailability


+(id)sharedInstance;
+(void)_setupAccountMonitor;
+(void)initialize;
-(BOOL)_canSendText;
-(BOOL)_hasSMSCapability;
-(BOOL)_isiMessageSupported;
-(BOOL)canSendPhotos:(int)arg0 videos:(int)arg1 audioClips:(int)arg2 ;
-(BOOL)canSendText;
-(BOOL)isMMSEnabled;
-(BOOL)isSupportedAttachmentUTI:(id)arg0 ;
-(BOOL)isiMessageEnabled;
-(NSInteger)_maxMMSAttachmentCount;
-(NSInteger)_maxMMSMessageByteCount;
-(id)_managedConfigAppAllowlist;
-(void)_updateServiceAvailability;


@end


#endif