// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFDAFOLDERCHANGECONSUMER_H
#define MFDAFOLDERCHANGECONSUMER_H

@class MFConditionLock;
@protocol DAFolderChangeConsumer;

#import <Foundation/Foundation.h>

#import "MFDAFolderChangeResult.h"

@interface MFDAFolderChangeConsumer : NSObject <DAFolderChangeConsumer>

 {
    MFConditionLock *_conditionLock;
    MFDAFolderChangeResult *_result;
}




-(id)init;
-(id)waitForResult;
-(void)folderChange:(id)arg0 finishedWithStatus:(NSInteger)arg1 error:(id)arg2 ;


@end


#endif