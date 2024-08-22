// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLPREVIEWREPLY_H
#define QLPREVIEWREPLY_H

@class NSDictionary, QLTBitmapFormat, UTType, NSData, QLURLHandler, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface QLPreviewReply : NSObject <NSSecureCoding>



@property (copy) NSDictionary *attachments; // ivar: _attachments
@property (retain) QLTBitmapFormat *bitmapFormat; // ivar: _bitmapFormat
@property CGSize contentSize; // ivar: _contentSize
@property (retain) UTType *contentType; // ivar: _contentType
@property (retain) NSData *data; // ivar: _data
@property (copy, nonatomic) id *dataCreationBlock; // ivar: _dataCreationBlock
@property (copy, nonatomic) id *documentCreationBlock; // ivar: _documentCreationBlock
@property (copy, nonatomic) id *drawInContextBlock; // ivar: _drawInContextBlock
@property (retain) QLURLHandler *fileURLHandler; // ivar: _fileURLHandler
@property NSUInteger replyType; // ivar: _replyType
@property NSUInteger stringEncoding; // ivar: _stringEncoding
@property (copy) NSString *title; // ivar: _title
@property BOOL wantsBorder; // ivar: _wantsBorder


+(BOOL)supportsSecureCoding;
-(id)drawWithContext:(struct CGContext *)arg0 ;
-(id)init;
-(id)initForPDFWithPageSize:(struct CGSize )arg0 documentCreationBlock:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContextSize:(struct CGSize )arg0 isBitmap:(BOOL)arg1 drawingBlock:(id)arg2 ;
-(id)initWithDataOfContentType:(id)arg0 contentSize:(struct CGSize )arg1 dataCreationBlock:(id)arg2 ;
-(id)initWithFileURL:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 forcedContentType:(id)arg1 ;
-(id)initWithViewControllerOfPreferredContentSize:(struct CGSize )arg0 title:(id)arg1 wantsBorder:(BOOL)arg2 ;
-(id)updateFromDataCreationBlock;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithImageData:(id)arg0 bitmapFormat:(id)arg1 ;
-(void)updateWithPDFData:(id)arg0 ;


@end


#endif