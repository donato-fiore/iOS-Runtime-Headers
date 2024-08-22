// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCMODIFYSHORTCUTSCOMMAND_H
#define FCMODIFYSHORTCUTSCOMMAND_H



#import "FCModifyRecordsCommand.h"

@interface FCModifyShortcutsCommand : FCModifyRecordsCommand



+(id)desiredKeys;
-(BOOL)mergeLocalRecord:(id)arg0 withRemoteRecord:(id)arg1 ;
-(id)initWithShortcuts:(id)arg0 merge:(BOOL)arg1 ;


@end


#endif