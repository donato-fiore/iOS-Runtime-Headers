// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TUREPLYWITHMESSAGESTORE_H
#define TUREPLYWITHMESSAGESTORE_H


#import <Foundation/Foundation.h>


@interface TUReplyWithMessageStore : NSObject



-(id)_cannedRepliesForSending:(BOOL)arg0 ;
-(id)_defaultRepliesForSending:(BOOL)arg0 ;
-(id)cannedReplies;
-(id)cannedRepliesForSending;
-(id)cannedReplyActionSheetOptions;
-(id)customReplies;
-(id)defaultReplies;
-(id)init;
-(int)count;
-(void)_handleMessagesStoreChanged;
-(void)dealloc;
-(void)setCustomReply:(id)arg0 atIndex:(NSUInteger)arg1 ;


@end


#endif