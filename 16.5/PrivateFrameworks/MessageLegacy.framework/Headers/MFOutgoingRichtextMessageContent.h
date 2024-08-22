// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFOUTGOINGRICHTEXTMESSAGECONTENT_H
#define MFOUTGOINGRICHTEXTMESSAGECONTENT_H

@class NSArray;


#import "MFOutgoingMessageContent.h"
#import "MFPlainTextDocument.h"

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent

@property (retain, nonatomic) NSArray *mixedContent; // ivar: _mixedContent
@property (retain, nonatomic) MFPlainTextDocument *plaintextAlternative; // ivar: _plaintextAlternative
@property (nonatomic) BOOL textPartsAreHTML; // ivar: _textPartsAreHTML


-(id)copy;
-(id)richtextContent;
-(void)dealloc;


@end


#endif