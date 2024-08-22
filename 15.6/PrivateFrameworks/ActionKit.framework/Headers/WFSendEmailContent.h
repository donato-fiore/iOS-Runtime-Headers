// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSENDEMAILCONTENT_H
#define WFSENDEMAILCONTENT_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface WFSendEmailContent : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *attachments; // ivar: _attachments
@property (copy, nonatomic) NSArray *bccRecipients; // ivar: _bccRecipients
@property (copy, nonatomic) NSString *body; // ivar: _body
@property (copy, nonatomic) NSArray *ccRecipients; // ivar: _ccRecipients
@property (nonatomic) BOOL isHTML; // ivar: _isHTML
@property (copy, nonatomic) NSString *subject; // ivar: _subject
@property (copy, nonatomic) NSArray *toRecipients; // ivar: _toRecipients


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif