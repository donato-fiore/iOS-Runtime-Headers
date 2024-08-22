// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICBASETEXTVIEWPASTESESSION_H
#define ICBASETEXTVIEWPASTESESSION_H


#import <Foundation/Foundation.h>


@interface ICBaseTextViewPasteSession : NSObject

@property (nonatomic) BOOL didWarnAboutAttachmentLimitExceeded; // ivar: _didWarnAboutAttachmentLimitExceeded
@property (nonatomic) BOOL didWarnAboutAttachmentSizeExceeded; // ivar: _didWarnAboutAttachmentSizeExceeded
@property (nonatomic) BOOL didWarnAboutExceedingMaxLength; // ivar: _didWarnAboutExceedingMaxLength
@property (nonatomic) BOOL didWarnAboutNotSupportedForPasswordProtectedNotes; // ivar: _didWarnAboutNotSupportedForPasswordProtectedNotes
@property (nonatomic) NSUInteger numberOfImagesPasted; // ivar: _numberOfImagesPasted
@property (nonatomic) BOOL previousShouldAddMediaAsynchronously; // ivar: _previousShouldAddMediaAsynchronously




@end


#endif