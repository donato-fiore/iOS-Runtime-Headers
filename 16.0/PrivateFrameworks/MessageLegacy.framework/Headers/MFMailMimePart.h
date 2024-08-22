// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFMAILMIMEPART_H
#define MFMAILMIMEPART_H

@class MFMimePart;



@interface MFMailMimePart : MFMimePart



+(BOOL)isRecognizedClassForContent:(id)arg0 ;
+(Class)attachmentClass;
-(BOOL)_shouldContinueDecodingProcess;
-(id)contentToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 asHTML:(BOOL)arg3 isComplete:(*BOOL)arg4 ;
-(id)decodeMessageDelivery_status;
-(id)decodeMessageExternal_body;
-(id)decodeMessagePartial;
-(id)decodeMessageRfc822;
-(id)decodeMultipartAppledouble;
-(id)decodeTextCalendar;
-(id)decodeTextEnriched;
-(id)decodeTextHtml;
-(id)decodeTextPlain;
-(id)decodeTextRichtext;
-(id)fileWrapperForDecodedObject:(id)arg0 withFileData:(*id)arg1 ;
-(id)fileWrapperForcingDownload:(BOOL)arg0 ;
-(id)htmlContent;
-(id)htmlContentToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 ;
-(id)htmlContentToOffset:(NSUInteger)arg0 resultOffset:(*NSUInteger)arg1 downloadIfNecessary:(BOOL)arg2 ;
-(id)storeData:(id)arg0 inMessage:(id)arg1 isComplete:(BOOL)arg2 ;
-(void)configureFileWrapper:(id)arg0 ;


@end


#endif