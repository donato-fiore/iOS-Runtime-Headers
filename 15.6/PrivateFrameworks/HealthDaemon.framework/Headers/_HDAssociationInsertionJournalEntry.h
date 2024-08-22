// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HDASSOCIATIONINSERTIONJOURNALENTRY_H
#define _HDASSOCIATIONINSERTIONJOURNALENTRY_H

@class NSUUID, NSData;


#import "HDJournalEntry.h"

@interface _HDAssociationInsertionJournalEntry : HDJournalEntry {
    BOOL _enforceSameSource;
    NSUUID *_parentUUID;
    NSData *_childUUIDsData;
    NSInteger _provenance;
}




+(BOOL)supportsSecureCoding;
+(void)applyEntries:(id)arg0 withProfile:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif