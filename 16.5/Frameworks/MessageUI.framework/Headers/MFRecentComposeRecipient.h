// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFRECENTCOMPOSERECIPIENT_H
#define MFRECENTCOMPOSERECIPIENT_H

@class CRRecentContact;


#import "MFComposeRecipient.h"

@interface MFRecentComposeRecipient : MFComposeRecipient {
    CRRecentContact *_recent;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isGroup;
-(BOOL)isRemovableFromSearchResults;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecentContact:(id)arg0 ;
-(id)placeholderName;
-(id)preferredSendingAddress;
-(id)recentContact;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif