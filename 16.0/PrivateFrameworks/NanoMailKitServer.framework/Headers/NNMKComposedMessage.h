// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKCOMPOSEDMESSAGE_H
#define NNMKCOMPOSEDMESSAGE_H

@class NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NNMKComposedMessage : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accountId; // ivar: _accountId
@property (retain, nonatomic) NSArray *attachments; // ivar: _attachments
@property (retain, nonatomic) NSString *body; // ivar: _body
@property (retain, nonatomic) NSArray *cc; // ivar: _cc
@property (retain, nonatomic) NSString *composedMessageId; // ivar: _composedMessageId
@property (retain, nonatomic) NSString *from; // ivar: _from
@property (nonatomic) BOOL includeAttachments; // ivar: _includeAttachments
@property (nonatomic) NSInteger progress; // ivar: _progress
@property (retain, nonatomic) NSString *referenceMessageId; // ivar: _referenceMessageId
@property (nonatomic) NSUInteger sendingType; // ivar: _sendingType
@property (retain, nonatomic) NSString *standaloneReferenceMessageId; // ivar: _standaloneReferenceMessageId
@property (retain, nonatomic) NSString *subject; // ivar: _subject
@property (retain, nonatomic) NSArray *to; // ivar: _to


+(BOOL)supportsSecureCoding;
-(NSUInteger)size;
-(id)copyWithNewId;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif