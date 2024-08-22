// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLMODELMIGRATORLOG_H
#define PLMODELMIGRATORLOG_H

@class NSFileHandle, NSDateFormatter;

#import <Foundation/Foundation.h>


@interface PLModelMigratorLog : NSObject {
    NSFileHandle *_fileHandle;
    NSDateFormatter *_dateFormatter;
}




+(id)new;
+(id)openWriteFileAtURL:(id)arg0 ;
+(id)setup;
-(id)buildFormatString:(char *)arg0 ;
-(id)init;
-(id)initWithFileHandle:(id)arg0 ;
-(id)initWithLogFileURL:(id)arg0 ;
-(void)_logFromCodeLocation:(struct ? )arg0 subsystem:(id)arg1 type:(unsigned char)arg2 message:(char *)arg3 ;
-(void)logFromCodeLocation:(struct ? )arg0 subsystem:(id)arg1 type:(unsigned char)arg2 format:(char *)arg3 ;


@end


#endif