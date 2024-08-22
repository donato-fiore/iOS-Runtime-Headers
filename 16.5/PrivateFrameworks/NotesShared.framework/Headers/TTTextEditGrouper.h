// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TTTEXTEDITGROUPER_H
#define TTTEXTEDITGROUPER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "TTTextEditFilter.h"
#import "ICNote.h"

@interface TTTextEditGrouper : NSObject

@property (readonly, nonatomic) NSMutableDictionary *checkmarkReplicaIDForUserID; // ivar: _checkmarkReplicaIDForUserID
@property (copy, nonatomic) TTTextEditFilter *filter; // ivar: _filter
@property (nonatomic) BOOL includesCheckmarkEdits; // ivar: _includesCheckmarkEdits
@property (nonatomic) BOOL includesTableEdits; // ivar: _includesTableEdits
@property (nonatomic) BOOL joinsTextGaps; // ivar: _joinsTextGaps
@property (nonatomic) BOOL joinsWhitespaceAndNewlineGaps; // ivar: _joinsWhitespaceAndNewlineGaps
@property (readonly, nonatomic) ICNote *note; // ivar: _note
@property (readonly, nonatomic) NSMutableDictionary *trustsTimestampsFromReplicaID; // ivar: _trustsTimestampsFromReplicaID
@property (readonly, nonatomic) NSMutableDictionary *userIDForReplicaID; // ivar: _userIDForReplicaID


-(BOOL)trustsTimestampsFromReplicaID:(id)arg0 ;
-(id)editGroupForEdits:(id)arg0 userID:(id)arg1 inAttributedString:(id)arg2 ;
-(id)editsByAddingAllowedAttachmentEditsToEdit:(id)arg0 inAttributedString:(id)arg1 ;
-(id)editsByAddingCheckmarkEditsToEdit:(id)arg0 inAttributedString:(id)arg1 ;
-(id)editsByAddingTableEditsToEdit:(id)arg0 inAttributedString:(id)arg1 ;
-(id)filteredEditForEdit:(id)arg0 inAttributedString:(id)arg1 ;
-(id)groupedEdits;
-(id)groupedEditsForEdits:(id)arg0 inAttributedString:(id)arg1 ;
-(id)initWithNote:(id)arg0 ;
-(id)latestTimestampForEdits:(id)arg0 ;
-(id)userIDForReplicaID:(id)arg0 ;
-(struct _NSRange )rangeForEdits:(id)arg0 ;


@end


#endif