// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCMMFILEBACKEDACTIONMANAGER_H
#define PXCMMFILEBACKEDACTIONMANAGER_H

@protocol PXCMMFileBackedActionPerformerDelegate;


#import "PXCMMActionManager.h"

@interface PXCMMFileBackedActionManager : PXCMMActionManager

@property (weak, nonatomic) NSObject<PXCMMFileBackedActionPerformerDelegate> *performerDelegate;


-(id)init;


@end


#endif