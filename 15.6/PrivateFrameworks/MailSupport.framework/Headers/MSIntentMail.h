// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSINTENTMAIL_H
#define MSINTENTMAIL_H

@class INObject, NSArray, NSString, NSDateComponents, INPerson;



@interface MSIntentMail : INObject

@property (copy, nonatomic) NSArray *bcc;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSArray *cc;
@property (copy, nonatomic) NSDateComponents *dateSent;
@property (copy, nonatomic) INPerson *sender;
@property (copy, nonatomic) NSString *subject;
@property (copy, nonatomic) NSArray *to;




@end


#endif