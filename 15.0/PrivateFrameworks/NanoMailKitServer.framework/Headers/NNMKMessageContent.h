// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKMESSAGECONTENT_H
#define NNMKMESSAGECONTENT_H

@class NSArray, NSString, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NNMKMessageContent : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSString *externalReferenceId; // ivar: _externalReferenceId
@property (nonatomic) BOOL hasTextData; // ivar: _hasTextData
@property (retain, nonatomic) NSData *htmlContentData; // ivar: _htmlContentData
@property (readonly, nonatomic) BOOL isHTML;
@property (nonatomic) BOOL mainAlternativeValid; // ivar: _mainAlternativeValid
@property (retain, nonatomic) NSString *messageId; // ivar: _messageId
@property (nonatomic) NSUInteger originalContentSize; // ivar: _originalContentSize
@property (nonatomic) BOOL partiallyLoaded; // ivar: _partiallyLoaded
@property (retain, nonatomic) NSData *textData; // ivar: _textData


+(BOOL)supportsSecureCoding;
+(id)classesForUnarchivingTextData;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif