// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IMDSOUNDUTILITIES_H
#define IMDSOUNDUTILITIES_H


#import <Foundation/Foundation.h>


@interface IMDSoundUtilities : NSObject



+(BOOL)_isAcknowledgmentMessage:(id)arg0 ;
+(BOOL)_isAssociatedMessage:(id)arg0 ;
+(BOOL)_isAutoPlay:(id)arg0 ;
+(BOOL)_isSMSMessage:(id)arg0 ;
+(BOOL)_isSuppressedForGUID:(id)arg0 ;
+(BOOL)_wasDowngraded:(id)arg0 ;
+(NSInteger)_smsSoundsToPlay;
+(NSInteger)_soundTypeForMessage:(id)arg0 ;
+(unsigned int)_installSystemSound:(id)arg0 ;
+(void)_playAcknowledgmentSentSound;
+(void)_playSMSSound;
+(void)_playSoundType:(NSInteger)arg0 ;
+(void)_stopSuppressingForGUID:(id)arg0 ;
+(void)playMessageSentSoundIfNeeded:(id)arg0 ;


@end


#endif