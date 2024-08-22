// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCMODIFYRECORDSCOMMAND_H
#define FCMODIFYRECORDSCOMMAND_H

@class NSArray;


#import "FCCommand.h"

@interface FCModifyRecordsCommand : FCCommand {
    BOOL _merge;
    id *_localRecordsGenerator;
    NSArray *_localRecords;
}


@property (readonly, nonatomic) NSArray *t_localRecords;


+(BOOL)supportsSecureCoding;
+(id)desiredKeys;
-(BOOL)canCoalesceWithCommand:(id)arg0 ;
-(BOOL)mergeLocalRecord:(id)arg0 withRemoteRecord:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLocalRecords:(id)arg0 merge:(BOOL)arg1 ;
// -(id)initWithLocalRecordsGenerator:(id)arg0 merge:(unk)arg1  ;
-(void)coalesceWithCommand:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)executeWithContext:(id)arg0 delegate:(id)arg1 qualityOfService:(NSInteger)arg2 ;


@end


#endif