// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICATTACHMENTAUDIOMODEL_H
#define ICATTACHMENTAUDIOMODEL_H

@class NSDate, NSString;


#import "ICAttachmentModel.h"

@interface ICAttachmentAudioModel : ICAttachmentModel

@property (copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (nonatomic) BOOL recordedInNotes; // ivar: _recordedInNotes
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)contentInfoTextWithAttachmentCount:(NSUInteger)arg0 ;
-(id)initWithAttachment:(id)arg0 ;
-(void)updateFileBasedAttributes;


@end


#endif