// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFOUTGOINGMESSAGECONTENT_H
#define MFOUTGOINGMESSAGECONTENT_H

@class MFMutableMessageHeaders, NSArray;

#import <Foundation/Foundation.h>

#import "MFOutgoingLibraryMessageContent.h"
#import "MFOutgoingMultipartRelatedContent.h"
#import "MFOutgoingRichtextMessageContent.h"

@interface MFOutgoingMessageContent : NSObject

@property (retain, nonatomic) MFMutableMessageHeaders *headers; // ivar: _headers
@property (readonly, nonatomic) MFOutgoingLibraryMessageContent *libraryContent;
@property (readonly, nonatomic) MFOutgoingMultipartRelatedContent *multipartContent;
@property (retain, nonatomic) NSArray *placeholders; // ivar: _placeholders
@property (readonly, nonatomic) MFOutgoingRichtextMessageContent *richtextContent;


-(id)copy;


@end


#endif