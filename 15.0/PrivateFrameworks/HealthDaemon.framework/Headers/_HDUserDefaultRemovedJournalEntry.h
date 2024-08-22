// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDUSERDEFAULTREMOVEDJOURNALENTRY_H
#define _HDUSERDEFAULTREMOVEDJOURNALENTRY_H

@class NSString;


#import "HDJournalEntry.h"

@interface _HDUserDefaultRemovedJournalEntry : HDJournalEntry

@property (readonly, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) NSString *key; // ivar: _key


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif