// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CNCONTACTVCARDNAMESUMMZARIZATIONSCOPE_H
#define _CNCONTACTVCARDNAMESUMMZARIZATIONSCOPE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "CNContact.h"

@interface _CNContactVCardNameSummzarizationScope : NSObject

@property (readonly, nonatomic) CNContact *contact; // ivar: _contact
@property (readonly, copy, nonatomic) NSString *fullName; // ivar: _fullName


-(id)initWithContact:(id)arg0 fullName:(id)arg1 ;


@end


#endif