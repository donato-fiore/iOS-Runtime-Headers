// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SGMISTAGEDLOGRECORD_H
#define SGMISTAGEDLOGRECORD_H


#import <Foundation/Foundation.h>

#import "SGMIMetricsMailIntelligenceForMessage.h"

@interface SGMIStagedLogRecord : NSObject

@property (readonly) BOOL isLogged; // ivar: _isLogged
@property (readonly) SGMIMetricsMailIntelligenceForMessage *log; // ivar: _log


-(id)initWithLog:(id)arg0 isLogged:(BOOL)arg1 ;


@end


#endif