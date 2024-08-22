// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TIDPNGRAMRECORDERCASCADING_H
#define TIDPNGRAMRECORDERCASCADING_H



#import "TIDPRecorder.h"

@interface TIDPNgramRecorderCascading : TIDPRecorder

@property (nonatomic) NSUInteger n; // ivar: _n


-(BOOL)report;
-(id)initWithTypingSession:(id)arg0 aligned:(id)arg1 n:(NSUInteger)arg2 ;


@end


#endif