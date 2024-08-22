// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRTTMERGEABLESTRINGUNDOEDITCOMMAND_H
#define CRTTMERGEABLESTRINGUNDOEDITCOMMAND_H


#import <Foundation/Foundation.h>

#import "CRContext.h"

@interface CRTTMergeableStringUndoEditCommand : NSObject

@property (weak, nonatomic) CRContext *context; // ivar: _context
@property (readonly, nonatomic) *void deleteRanges; // ivar: _deleteRanges
@property (readonly, nonatomic) *void insertStrings; // ivar: _insertStrings


-(BOOL)hasTemporaryIDs;
-(id)description;
-(id)init;
-(id)renamedWith:(id)arg0 ;
-(id)temporaryIDs;
-(void)_applyToString:(id)arg0 ;
-(void)applyToString:(id)arg0 ;
-(void)dealloc;
-(void)retainTemporaryIDsInManager:(id)arg0 copyingFrom:(id)arg1 ;
-(void)updateInsertTopoIDRange:(struct TopoIDRange )arg0 toNewRangeID:(struct TopoIDRange )arg1 ;
-(void)updateTopoIDRange:(struct TopoIDRange )arg0 toNewRangeID:(struct TopoIDRange )arg1 ;


@end


#endif