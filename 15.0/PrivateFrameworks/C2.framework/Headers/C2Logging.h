// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef C2LOGGING_H
#define C2LOGGING_H


#import <Foundation/Foundation.h>


@interface C2Logging : NSObject



+(void)printToLog:(id)arg0 withDescription:(id)arg1 array:(id)arg2 ;
+(void)printToLog:(id)arg0 withDescription:(id)arg1 dictionary:(id)arg2 ;
+(void)printToLog:(id)arg0 withDescription:(id)arg1 error:(id)arg2 ;
+(void)printToLog:(id)arg0 withDescription:(id)arg1 object:(id)arg2 ;


@end


#endif