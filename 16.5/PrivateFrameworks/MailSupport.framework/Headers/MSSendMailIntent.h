// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSENDMAILINTENT_H
#define MSSENDMAILINTENT_H

@class INIntent, NSArray, NSString, NSNumber;
@protocol EFPubliclyDescribable;



@interface MSSendMailIntent : INIntent <EFPubliclyDescribable>



@property (copy, nonatomic) NSArray *attachments;
@property (copy, nonatomic) NSArray *bcc;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSArray *cc;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSNumber *isDraft;
@property (copy, nonatomic) NSString *sender;
@property (copy, nonatomic) NSString *subject;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *to;
@property (copy, nonatomic) NSString *userTypedContent;


-(id)_privacySafeDescription;


@end


#endif