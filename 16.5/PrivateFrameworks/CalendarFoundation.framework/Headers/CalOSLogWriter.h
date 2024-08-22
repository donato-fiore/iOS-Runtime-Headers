// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALOSLOGWRITER_H
#define CALOSLOGWRITER_H

@protocol OS_os_log;


#import "CalLogWriter.h"

@interface CalOSLogWriter : CalLogWriter {
    NSObject<OS_os_log> *CalOSLogClient;
}




+(id)autoLogNamespaces;
+(unsigned char)osLogLevelfromCalLogLevel:(int)arg0 ;
-(NSUInteger)_indexToSplitOnForIndex:(NSUInteger)arg0 chunkBytes:(char *)arg1 ;
-(id)initWithParameters:(id)arg0 ;
-(void)_configureAutoLogNamespaces;
-(void)_configureOSLogClient;
-(void)_logStringInChunks:(id)arg0 ;
-(void)write:(id)arg0 ;


@end


#endif