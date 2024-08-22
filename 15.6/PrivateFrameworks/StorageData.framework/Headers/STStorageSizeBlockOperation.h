// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STSTORAGESIZEBLOCKOPERATION_H
#define STSTORAGESIZEBLOCKOPERATION_H



#import "STStorageSizeOperation.h"
#import "STStorageApp.h"

@interface STStorageSizeBlockOperation : STStorageSizeOperation

@property (retain) STStorageApp *app; // ivar: _app
@property (copy) id *sizeBlock; // ivar: _sizeBlock


+(id)operationWithSizeBlock:(id)arg0 ;
-(void)main;


@end


#endif