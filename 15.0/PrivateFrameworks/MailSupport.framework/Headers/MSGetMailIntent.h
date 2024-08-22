// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSGETMAILINTENT_H
#define MSGETMAILINTENT_H

@class INIntent, INPerson, NSString;



@interface MSGetMailIntent : INIntent

@property (nonatomic) NSInteger readStatus;
@property (copy, nonatomic) INPerson *recipient;
@property (copy, nonatomic) INPerson *sender;
@property (copy, nonatomic) NSString *subject;




@end


#endif