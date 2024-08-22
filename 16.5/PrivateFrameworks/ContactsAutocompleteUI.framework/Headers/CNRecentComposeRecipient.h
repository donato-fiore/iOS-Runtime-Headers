// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNRECENTCOMPOSERECIPIENT_H
#define CNRECENTCOMPOSERECIPIENT_H

@class CRRecentContact;


#import "CNComposeRecipient.h"

@interface CNRecentComposeRecipient : CNComposeRecipient {
    CRRecentContact *_recent;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGroup;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecentContact:(id)arg0 ;
-(id)placeholderName;
-(id)preferredSendingAddress;
-(id)recentContact;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif