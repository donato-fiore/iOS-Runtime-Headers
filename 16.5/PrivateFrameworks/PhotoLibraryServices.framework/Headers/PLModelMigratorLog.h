// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMODELMIGRATORLOG_H
#define PLMODELMIGRATORLOG_H

@class NSDateFormatter;

#import <Foundation/Foundation.h>


@interface PLModelMigratorLog : NSObject {
    NSDateFormatter *_dateFormatter;
}




+(id)new;
+(id)openLoggerAtURL:(id)arg0 logRotate:(BOOL)arg1 ;
+(id)setup;
-(id)init;
-(id)initWithLogFileURL:(id)arg0 logRotate:(BOOL)arg1 ;
-(void)close;
-(void)dealloc;
-(void)logWithMessage:(char *)arg0 fromCodeLocation:(struct ? )arg1 type:(unsigned char)arg2 ;


@end


#endif