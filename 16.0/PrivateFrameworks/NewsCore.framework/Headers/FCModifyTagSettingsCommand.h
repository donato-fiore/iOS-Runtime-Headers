// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCMODIFYTAGSETTINGSCOMMAND_H
#define FCMODIFYTAGSETTINGSCOMMAND_H



#import "FCModifyRecordsCommand.h"

@interface FCModifyTagSettingsCommand : FCModifyRecordsCommand



+(id)desiredKeys;
-(BOOL)mergeLocalRecord:(id)arg0 withRemoteRecord:(id)arg1 ;
-(id)initWithTagSettingsEntries:(id)arg0 merge:(BOOL)arg1 ;


@end


#endif