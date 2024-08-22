// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFRECENTCOMPOSERECIPIENTGROUP_H
#define MFRECENTCOMPOSERECIPIENTGROUP_H

@class CRRecentContact;


#import "MFComposeRecipientGroup.h"

@interface MFRecentComposeRecipientGroup : MFComposeRecipientGroup

@property (readonly, retain, nonatomic) CRRecentContact *recentContact; // ivar: _recentContact


-(id)initWithChildren:(id)arg0 displayString:(id)arg1 recentContact:(id)arg2 ;
-(id)label;
-(id)placeholderName;
-(id)unlocalizedLabel;


@end


#endif