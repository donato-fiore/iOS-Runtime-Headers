// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QLPREVIEWCONTEXT_H
#define QLPREVIEWCONTEXT_H

@class NSDictionary, UIColor, QLTBitmapFormat, NSString, NSNumber;
@protocol NSSecureCoding, QLItemThumbnailGeneratorProtocolInternal;

#import <Foundation/Foundation.h>

#import "QLItem.h"

@interface QLPreviewContext : NSObject <NSSecureCoding>



@property (retain) NSDictionary *attachments; // ivar: _attachments
@property (retain) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain) QLTBitmapFormat *bitmapFormat; // ivar: _bitmapFormat
@property BOOL canBeEdited; // ivar: _canBeEdited
@property BOOL canBeShared; // ivar: _canBeShared
@property (retain) NSDictionary *clientPreviewOptions; // ivar: _clientPreviewOptions
@property (retain) NSString *contentType; // ivar: _contentType
@property NSUInteger editedFileBehavior; // ivar: _editedFileBehavior
@property (retain) QLItem *item; // ivar: _item
@property (retain) NSNumber *itemSize; // ivar: _itemSize
@property (retain) NSString *originalContentType; // ivar: _originalContentType
@property (copy) NSString *password; // ivar: _password
@property NSUInteger previewItemType; // ivar: _previewItemType
@property (retain) NSString *previewTitle; // ivar: _previewTitle
@property NSInteger processIdentifier; // ivar: _processIdentifier
@property NSUInteger stringEncoding; // ivar: _stringEncoding
@property (retain) NSObject<QLItemThumbnailGeneratorProtocolInternal> *thumbnailGenerator; // ivar: _thumbnailGenerator


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif