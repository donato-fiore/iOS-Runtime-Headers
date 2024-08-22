// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MFMAILCOMPOSECONTENTVARIATION_H
#define _MFMAILCOMPOSECONTENTVARIATION_H

@class NSArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _MFMailComposeContentVariation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSArray *attachmentIdentifiers; // ivar: _attachmentIdentifiers
@property (copy, nonatomic) NSString *body; // ivar: _body
@property (nonatomic) BOOL bodyIsHTML; // ivar: _bodyIsHTML
@property (copy, nonatomic) NSString *name; // ivar: _name


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(void)addAttachmentIdentifier:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif