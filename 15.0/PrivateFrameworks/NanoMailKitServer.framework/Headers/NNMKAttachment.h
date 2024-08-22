// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKATTACHMENT_H
#define NNMKATTACHMENT_H

@class NSTextAttachment, NSString;
@protocol NSSecureCoding;



@interface NNMKAttachment : NSTextAttachment <NSSecureCoding>



@property (retain, nonatomic) NSString *contentId; // ivar: _contentId
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (nonatomic) NSUInteger fileSize; // ivar: _fileSize
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId
@property (retain, nonatomic) NSString *mimePartNumber; // ivar: _mimePartNumber
@property (nonatomic) NSUInteger syncState; // ivar: _syncState
@property (nonatomic) NSUInteger type; // ivar: _type
@property (retain, nonatomic) NSString *url; // ivar: _url


+(BOOL)isTypeActionable:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)isActionable;
-(BOOL)isImage;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif