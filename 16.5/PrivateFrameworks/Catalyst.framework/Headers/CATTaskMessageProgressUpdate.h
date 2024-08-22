// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CATTASKMESSAGEPROGRESSUPDATE_H
#define CATTASKMESSAGEPROGRESSUPDATE_H



#import "CATTaskMessage.h"
#import "CATTaskProgress.h"

@interface CATTaskMessageProgressUpdate : CATTaskMessage

@property (copy, nonatomic) CATTaskProgress *progress; // ivar: _progress


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTaskUUID:(id)arg0 progress:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif