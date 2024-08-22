// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MSSTICKERSENDMANAGER_H
#define _MSSTICKERSENDMANAGER_H

@class NSString;
@protocol _MSStickerSendManagerDelegate;

#import <Foundation/Foundation.h>


@interface _MSStickerSendManager : NSObject <_MSStickerSendManagerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<_MSStickerSendManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)insertSticker:(id)arg0 completionHandler:(id)arg1 ;
-(void)startDragSticker:(id)arg0 frameInRemoteView:(struct CGRect )arg1 fence:(id)arg2 completionHandler:(id)arg3 ;
-(void)stickerDragCanceled;
-(void)stickerDragMoved:(id)arg0 frameInRemoteView:(struct CGRect )arg1 rotation:(CGFloat)arg2 scale:(CGFloat)arg3 fence:(id)arg4 completionHandler:(id)arg5 ;


@end


#endif