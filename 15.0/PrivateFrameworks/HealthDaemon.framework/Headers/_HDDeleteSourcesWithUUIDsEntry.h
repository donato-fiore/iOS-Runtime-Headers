// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDDELETESOURCESWITHUUIDSENTRY_H
#define _HDDELETESOURCESWITHUUIDSENTRY_H

@class NSSet, NSString;


#import "HDJournalEntry.h"

@interface _HDDeleteSourcesWithUUIDsEntry : HDJournalEntry

@property (retain, nonatomic) NSSet *UUIDs; // ivar: _UUIDs
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier


+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUIDs:(id)arg0 bundleIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif