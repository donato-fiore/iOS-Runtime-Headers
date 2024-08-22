// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOKITDESTRUCTIVEACTIONSPERFORMER_H
#define PUPHOTOKITDESTRUCTIVEACTIONSPERFORMER_H

@class NSString;
@protocol PUDeletePhotosActionControllerDelegate;


#import "PUPhotoKitActionPerformer.h"

@interface PUPhotoKitDestructiveActionsPerformer : PUPhotoKitActionPerformer <PUDeletePhotosActionControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldConfirmDestructiveAction;
-(NSInteger)destructivePhotosAction;
-(void)deletePhotosActionController:(id)arg0 dismissConfirmationViewController:(id)arg1 ;
-(void)deletePhotosActionController:(id)arg0 presentConfirmationViewController:(id)arg1 ;
-(void)performUserInteractionTask;


@end


#endif