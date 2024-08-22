// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCREMOVERECORDSCOMMAND_H
#define FCREMOVERECORDSCOMMAND_H

@class NSArray;


#import "FCCommand.h"

@interface FCRemoveRecordsCommand : FCCommand {
    NSArray *_recordIDs;
}




+(BOOL)supportsSecureCoding;
-(BOOL)canCoalesceWithCommand:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecordIDs:(id)arg0 ;
-(void)coalesceWithCommand:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 delegate:(id)arg1 qualityOfService:(NSInteger)arg2 ;


@end


#endif