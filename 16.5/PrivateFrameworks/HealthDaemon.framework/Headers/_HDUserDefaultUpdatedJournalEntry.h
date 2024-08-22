// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HDUSERDEFAULTUPDATEDJOURNALENTRY_H
#define _HDUSERDEFAULTUPDATEDJOURNALENTRY_H

@class HDUserDefault;


#import "HDJournalEntry.h"

@interface _HDUserDefaultUpdatedJournalEntry : HDJournalEntry

@property (readonly, nonatomic) HDUserDefault *userDefault; // ivar: _userDefault


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif