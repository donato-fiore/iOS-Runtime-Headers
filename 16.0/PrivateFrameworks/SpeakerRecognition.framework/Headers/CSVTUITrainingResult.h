// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVTUITRAININGRESULT_H
#define CSVTUITRAININGRESULT_H


#import <Foundation/Foundation.h>


@interface CSVTUITrainingResult : NSObject

@property (readonly, nonatomic) int audioStatus; // ivar: _audioStatus
@property (readonly, nonatomic) NSInteger sessionId; // ivar: _sessionId
@property (readonly, nonatomic) int sessionStatus; // ivar: _sessionStatus


-(id)initWithSessionId:(NSInteger)arg0 sessionStatus:(int)arg1 audioStatus:(int)arg2 ;


@end


#endif