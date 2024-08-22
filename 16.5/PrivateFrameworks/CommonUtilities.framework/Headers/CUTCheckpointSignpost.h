// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUTCHECKPOINTSIGNPOST_H
#define CUTCHECKPOINTSIGNPOST_H

@protocol NSSecureCoding, OS_os_log;


#import "CUTCheckpoint.h"

@interface CUTCheckpointSignpost : CUTCheckpoint <NSSecureCoding>



@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (nonatomic) NSInteger scope; // ivar: _scope
@property (nonatomic) NSUInteger signpostID; // ivar: _signpostID


-(BOOL)_verifyMatchingName:(id)arg0 ;
-(id)initWithName:(id)arg0 uniqueIdentifier:(id)arg1 ;


@end


#endif