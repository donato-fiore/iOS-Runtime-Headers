// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFSWIFTIMAPMAILBOXTASKMANAGER_H
#define MFSWIFTIMAPMAILBOXTASKMANAGER_H


#import <Foundation/Foundation.h>

#import "MFMailMessageLibrary.h"

@interface MFSwiftIMAPMailboxTaskManager : NSObject {
    ? mailbox;
    ? taskManager;
}


@property (nonatomic, retain) MFMailMessageLibrary *library; // ivar: library


-(id)init;
-(id)initWithMailbox:(id)arg0 taskManager:(id)arg1 ;


@end


#endif