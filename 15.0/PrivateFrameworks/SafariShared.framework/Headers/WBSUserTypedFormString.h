// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSUSERTYPEDFORMSTRING_H
#define WBSUSERTYPEDFORMSTRING_H

@class NSString;


#import "WBSFormAutoFillItem.h"

@interface WBSUserTypedFormString : WBSFormAutoFillItem

@property (readonly, nonatomic) NSString *userTypedString; // ivar: _userTypedString


-(id)completion;
-(id)initWithUserTypedString:(id)arg0 ;


@end


#endif