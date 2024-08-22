// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGERRORMETRICS_H
#define SGERRORMETRICS_H


#import <Foundation/Foundation.h>

#import "SGMBadInteractionIgnored.h"

@interface SGErrorMetrics : NSObject

@property (retain, nonatomic) SGMBadInteractionIgnored *badInteractionIgnored; // ivar: _badInteractionIgnored


+(id)instance;
+(void)recordInteractionIgnoredWithReason:(struct SGMInteractionIgnoredReason_ )arg0 ;
-(id)init;


@end


#endif