// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIVISUALLOGGER_H
#define SIVISUALLOGGER_H

@class NSSet;

#import <Foundation/Foundation.h>


@interface SIVisualLogger : NSObject {
    *VZDestination _fileDestination;
    *VZDestination _networkDestination;
}


@property (readonly, nonatomic) *VZLogger internalVisualLoggerRef; // ivar: _visualLogger
@property (readonly, nonatomic) NSSet *registeredSubloggers; // ivar: _registeredSubloggers


+(id)_registerSubloggers;
+(id)defaultLogPath;
+(id)frameworkPrefix;
+(id)sharedLogger;
-(BOOL)_stopLoggingToFile;
-(BOOL)_stopLoggingToHost;
-(BOOL)isLoggerEnabled:(id)arg0 ;
-(BOOL)logBinaryData:(id)arg0 at:(CGFloat)arg1 sublogger:(id)arg2 name:(id)arg3 ;
-(BOOL)logDictionary:(id)arg0 at:(CGFloat)arg1 sublogger:(id)arg2 name:(id)arg3 ;
-(BOOL)logIOSurface:(struct __IOSurface *)arg0 at:(CGFloat)arg1 sublogger:(id)arg2 name:(id)arg3 ;
-(BOOL)logNumbers:(id)arg0 at:(CGFloat)arg1 sublogger:(id)arg2 name:(id)arg3 ;
-(BOOL)logPixelBuffer:(struct __CVBuffer *)arg0 at:(CGFloat)arg1 sublogger:(id)arg2 name:(id)arg3 ;
-(BOOL)startLoggingToFile:(id)arg0 ;
-(BOOL)startLoggingToFile:(id)arg0 synchronously:(BOOL)arg1 ;
-(BOOL)startLoggingToHost:(id)arg0 ;
-(BOOL)stopAndDisableLogging;
-(id)_arrayOfNumbersToData:(id)arg0 valueType:(*NSUInteger)arg1 ;
-(id)init;
-(struct Ref<const VZDataInfo *> )createDataInfoAt:(CGFloat)arg0 name:(id)arg1 ;
-(void)_disableAllLogs;
-(void)dealloc;
-(void)enableLogger:(id)arg0 ;
-(void)logAndReleaseError:(struct __CFError *)arg0 ;


@end


#endif