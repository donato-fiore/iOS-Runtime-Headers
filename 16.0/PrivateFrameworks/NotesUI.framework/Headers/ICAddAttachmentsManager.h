// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICADDATTACHMENTSMANAGER_H
#define ICADDATTACHMENTSMANAGER_H


#import <Foundation/Foundation.h>


@interface ICAddAttachmentsManager : NSObject



+(id)sharedManager;
-(id)saveAttachmentsToNewNote:(id)arg0 inFolder:(id)arg1 isSystemPaper:(BOOL)arg2 textBefore:(id)arg3 textAfter:(id)arg4 ;
-(unsigned int)styleForTitleLength:(NSInteger)arg0 ;
-(void)saveAttachments:(id)arg0 toNote:(id)arg1 textBefore:(id)arg2 textAfter:(id)arg3 ;
-(void)saveAttachments:(id)arg0 toNote:(id)arg1 textBefore:(id)arg2 textAfter:(id)arg3 fetchFirst:(BOOL)arg4 ;


@end


#endif