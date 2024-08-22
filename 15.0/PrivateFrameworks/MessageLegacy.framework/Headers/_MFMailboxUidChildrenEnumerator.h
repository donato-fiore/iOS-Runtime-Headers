// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MFMAILBOXUIDCHILDRENENUMERATOR_H
#define _MFMAILBOXUIDCHILDRENENUMERATOR_H

@class NSEnumerator, NSMutableArray;



@interface _MFMailboxUidChildrenEnumerator : NSEnumerator {
    NSMutableArray *_mailboxes;
    NSUInteger _index;
    BOOL _includeHidden;
}




-(id)_initWithMailbox:(id)arg0 includeHiddenChildren:(BOOL)arg1 ;
-(id)nextObject;
-(void)dealloc;


@end


#endif