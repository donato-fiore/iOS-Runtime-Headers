// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKFACETIMEUTILITIES_H
#define CKFACETIMEUTILITIES_H


#import <Foundation/Foundation.h>


@interface CKFaceTimeUtilities : NSObject



+(BOOL)isDirectTelephonyAvailable;
+(BOOL)isFaceTimeAudioAvailable:(id)arg0 ;
+(BOOL)isFaceTimeVideoAvailable:(id)arg0 ;
+(BOOL)isGroupFaceTimeSupported;
+(BOOL)isTelephonyAvailable;
+(void)showCallControlsForConversation:(id)arg0 ;


@end


#endif