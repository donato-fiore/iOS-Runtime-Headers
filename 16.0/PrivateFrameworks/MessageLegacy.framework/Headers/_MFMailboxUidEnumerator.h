// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFMAILBOXUIDENUMERATOR_H
#define _MFMAILBOXUIDENUMERATOR_H

@class NSEnumerator, NSMutableArray;



@interface _MFMailboxUidEnumerator : NSEnumerator {
    NSMutableArray *_mailboxes;
    NSUInteger _index;
}




-(id)initWithMailbox:(id)arg0 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif