// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDTELEPHONENUMBERACTION_H
#define DDTELEPHONENUMBERACTION_H

@class NSString, BCSBusinessItem;


#import "DDAction.h"

@interface DDTelephoneNumberAction : DDAction {
    NSString *_phoneNumber;
    NSString *_body;
}


@property (retain) BCSBusinessItem *bizItem; // ivar: bizItem


-(?)initWithURL:(?)arg0 resultcontext;
-(id)compactTitle;
-(id)contactAndLabelForPhoneNumber:(*id)arg0 ;
-(id)contactsMatchingPhoneNumber:(id)arg0 inContactStore:(id)arg1 ;
-(id)iconName;
-(id)labelToUseForEmail:(id)arg0 ofContact:(id)arg1 ;
-(id)labelToUseForPhoneNumber:(id)arg0 ofContact:(id)arg1 ;


@end


#endif