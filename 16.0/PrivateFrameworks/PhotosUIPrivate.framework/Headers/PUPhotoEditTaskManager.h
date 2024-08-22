// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOEDITTASKMANAGER_H
#define PUPHOTOEDITTASKMANAGER_H


#import <Foundation/Foundation.h>


@interface PUPhotoEditTaskManager : NSObject



+(id)sharedManager;
-(id)init;
-(void)createEditableCopyForReadOnlyPhoto:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif