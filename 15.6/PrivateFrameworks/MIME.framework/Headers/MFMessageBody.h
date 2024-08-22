// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFMESSAGEBODY_H
#define MFMESSAGEBODY_H


#import <Foundation/Foundation.h>

#import "MFMessage.h"

@interface MFMessageBody : NSObject {
    MFMessage *_message;
}


@property (readonly, nonatomic) BOOL isEncrypted; // ivar: _isEncrypted


-(BOOL)isHTML;
-(BOOL)isRich;
-(id)attachmentURLs;
-(id)attachments;
-(id)contentToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 asHTML:(BOOL)arg2 ;
-(id)contentToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 asHTML:(BOOL)arg2 isComplete:(*BOOL)arg3 ;
-(id)htmlContent;
-(id)htmlContentToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 ;
-(id)message;
-(id)rawData;
-(id)textHtmlPart;
-(unsigned int)numberOfAttachmentsSigned:(*BOOL)arg0 encrypted:(*BOOL)arg1 ;
-(void)setMessage:(id)arg0 ;


@end


#endif