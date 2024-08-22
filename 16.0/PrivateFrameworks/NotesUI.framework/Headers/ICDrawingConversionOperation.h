// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICDRAWINGCONVERSIONOPERATION_H
#define ICDRAWINGCONVERSIONOPERATION_H

@class NSOperation, ICAttachment, NSManagedObjectID;


#import "ICBaseTextAttachment.h"

@interface ICDrawingConversionOperation : NSOperation

@property (retain, nonatomic) ICAttachment *attachment; // ivar: _attachment
@property (readonly, nonatomic) NSManagedObjectID *attachmentID; // ivar: _attachmentID
@property (readonly, nonatomic) NSManagedObjectID *finalAttachmentID; // ivar: _finalAttachmentID
@property (readonly, nonatomic) BOOL isAutomatic; // ivar: _isAutomatic
@property (retain, nonatomic) ICBaseTextAttachment *textAttachment; // ivar: _textAttachment


-(id)initWithAttachment:(id)arg0 textAttachment:(id)arg1 automatic:(BOOL)arg2 ;
-(void)main;


@end


#endif