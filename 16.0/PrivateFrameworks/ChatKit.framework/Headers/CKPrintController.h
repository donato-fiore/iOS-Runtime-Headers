// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKPRINTCONTROLLER_H
#define CKPRINTCONTROLLER_H

@class NSCache, CNAvatarImageRenderer;

#import <Foundation/Foundation.h>


@interface CKPrintController : NSObject

@property (retain, nonatomic) NSCache *avatarCache; // ivar: _avatarCache
@property (retain, nonatomic) CNAvatarImageRenderer *avatarImageRenderer; // ivar: _avatarImageRenderer
@property (nonatomic, setter=setPrinting:) BOOL isPrinting; // ivar: _isPrinting


+(id)printAttributes:(id)arg0 ;
+(id)printBackgroundColor;
+(id)printBalloonTextColor;
+(id)printTranscriptTextColor;
+(id)sharedInstance;
+(void)printResolvedColors:(*id)arg0 balloonDescriptor:(struct CKBalloonDescriptor_t *)arg1 coloredBalloonView:(id)arg2 ;
-(id)avatarImageForContact:(id)arg0 diameter:(CGFloat)arg1 ;
-(id)init;
-(void)clearAvatarCache;


@end


#endif