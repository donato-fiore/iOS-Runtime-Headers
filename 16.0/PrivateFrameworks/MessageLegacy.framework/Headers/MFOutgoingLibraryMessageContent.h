// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFOUTGOINGLIBRARYMESSAGECONTENT_H
#define MFOUTGOINGLIBRARYMESSAGECONTENT_H



#import "MFOutgoingMessageContent.h"
#import "MFLibraryMessage.h"

@interface MFOutgoingLibraryMessageContent : MFOutgoingMessageContent

@property (retain, nonatomic) MFLibraryMessage *libraryMessage; // ivar: _libraryMessage


-(id)copy;
-(id)headers;
-(id)libraryContent;
-(void)dealloc;


@end


#endif