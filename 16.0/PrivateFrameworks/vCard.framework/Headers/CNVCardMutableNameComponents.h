// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNVCARDMUTABLENAMECOMPONENTS_H
#define CNVCARDMUTABLENAMECOMPONENTS_H

@class NSString;


#import "CNVCardNameComponents.h"

@interface CNVCardMutableNameComponents : CNVCardNameComponents

@property (copy) NSString *companyName;
@property (copy) NSString *firstName;
@property (copy) NSString *formattedName;
@property BOOL isCompany;
@property (copy) NSString *lastName;
@property (copy) NSString *middleName;
@property (copy) NSString *suffix;
@property (copy) NSString *title;




@end


#endif