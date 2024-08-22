// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFMAILCOMPOSEATTACHMENTWRAPPER_H
#define MFMAILCOMPOSEATTACHMENTWRAPPER_H

@class NSData, NSString, NSURL, EFSandboxedURLWrapper, NSItemProvider;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface MFMailComposeAttachmentWrapper : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSString *fileName; // ivar: _fileName
@property (readonly, nonatomic) NSURL *fileURL;
@property (retain, nonatomic) EFSandboxedURLWrapper *fileURLWrapper; // ivar: _fileURLWrapper
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSItemProvider *itemProvider; // ivar: _itemProvider
@property (retain, nonatomic) NSString *mimeType; // ivar: _mimeType


+(BOOL)supportsSecureCoding;
+(id)wrapperWithData:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 ;
+(id)wrapperWithFileURL:(id)arg0 mimeType:(id)arg1 ;
+(id)wrapperWithItemProvider:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 ;
-(NSUInteger)fileSize;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 ;
-(id)initWithFileURL:(id)arg0 mimeType:(id)arg1 ;
-(id)initWithItemProvider:(id)arg0 mimeType:(id)arg1 fileName:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif