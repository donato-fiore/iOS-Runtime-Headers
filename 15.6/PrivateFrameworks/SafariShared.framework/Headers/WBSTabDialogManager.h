// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSTABDIALOGMANAGER_H
#define WBSTABDIALOGMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WBSTabDialogManager : NSObject {
    NSMutableDictionary *_webProcessIDToDialogSetMapping;
    NSMutableDictionary *_tabIDToDialogQueueMapping;
    NSUInteger _queueCapacity;
}




-(NSInteger)_enqueueDialog:(id)arg0 ;
-(id)_dialogBlockingSlot:(struct ? )arg0 ;
-(id)_dialogBlockingWebProcessID:(int)arg0 ;
-(id)_queueForTabID:(NSUInteger)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)_setForWebProcessID:(int)arg0 createIfNeeded:(BOOL)arg1 ;
-(id)description;
-(id)init;
-(void)_cancelDialogsInQueue:(id)arg0 tabID:(NSUInteger)arg1 context:(id)arg2 ;
-(void)_dismissDialog:(id)arg0 withResponse:(id)arg1 ;
-(void)cancelAllDialogsBlockingSlot:(struct ? )arg0 ;
-(void)cancelAllDialogsBlockingWebProcessID:(int)arg0 ;
-(void)cancelAllDialogsForTabID:(NSUInteger)arg0 ;
-(void)cancelAllDialogsForTabID:(NSUInteger)arg0 context:(id)arg1 ;
-(void)cancelAllDialogsForTabID:(NSUInteger)arg0 reason:(id)arg1 ;
-(void)cancelAllDialogsWithContext:(id)arg0 ;
-(void)dismissCurrentDialogForTabID:(NSUInteger)arg0 withResponse:(id)arg1 ;
-(void)enqueueOrPresentDialog:(id)arg0 inSlot:(struct ? )arg1 ;
// -(void)enqueueOrPresentDialogInSlot:(struct ? )arg0 presentationBlock:(id)arg1 dismissalBlock:(unk)arg2 blocksWebProcessUntilDismissed:(id)arg3  ;
-(void)presentNextDialogForSlot:(struct ? )arg0 ;


@end


#endif