// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLMUTABLECONTACT_H
#define SCLMUTABLECONTACT_H

@class NSString;


#import "SCLContact.h"

@interface SCLMutableContact : SCLContact

@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) NSUInteger type;
@property (copy, nonatomic) NSString *value;




@end


#endif