// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFHTMLDATAOBJECT_H
#define MFHTMLDATAOBJECT_H

@class ECHTMLStringAndMIMECharset, NSArray, MFPlainTextDocument, MFQuotedAttachmentsInfo;

#import <Foundation/Foundation.h>


@interface MFHTMLDataObject : NSObject

@property (readonly, nonatomic) ECHTMLStringAndMIMECharset *htmlString; // ivar: _htmlString
@property (readonly, nonatomic) NSArray *otherHTMLStringsAndAttachments; // ivar: _otherHTMLStringsAndAttachments
@property (readonly, nonatomic) MFPlainTextDocument *plainTextAlternative; // ivar: _plainTextAlternative
@property (readonly, nonatomic) MFQuotedAttachmentsInfo *quotedAttachmentsInfo; // ivar: _quotedAttachmentsInfo


-(id)initWithHTMLString:(id)arg0 otherHTMLStringsAndAttachments:(id)arg1 plainTextAlternative:(id)arg2 quotedAttachmentsInfo:(id)arg3 ;


@end


#endif