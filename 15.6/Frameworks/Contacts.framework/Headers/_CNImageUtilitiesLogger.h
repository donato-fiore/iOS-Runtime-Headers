// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _CNIMAGEUTILITIESLOGGER_H
#define _CNIMAGEUTILITIESLOGGER_H

@class NSString;
@protocol CNImageUtilitiesLogger, OS_os_log;

#import <Foundation/Foundation.h>


@interface _CNImageUtilitiesLogger : NSObject <CNImageUtilitiesLogger>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly) Class superclass;


-(id)init;


@end


#endif