// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRTASK_H
#define BRTASK_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface BRTask : NSObject

@property (retain, nonatomic) NSArray *argv; // ivar: _argv
@property (retain, nonatomic) NSString *redirectStderrToFileAtPath; // ivar: _redirectStderrToFileAtPath
@property (nonatomic) int redirectStderrToFileDescriptor; // ivar: _redirectStderrToFileDescriptor
@property (retain, nonatomic) NSString *redirectStdoutToFileAtPath; // ivar: _redirectStdoutToFileAtPath
@property (nonatomic) int redirectStdoutToFileDescriptor; // ivar: _redirectStdoutToFileDescriptor
@property (readonly, nonatomic) int waitStatus; // ivar: _waitStatus


+(id)sanitizeStringForFilename:(id)arg0 ;
+(id)taskWithCommand:(id)arg0 ;
+(id)taskWithCommandWithArguments:(id)arg0 ;
-(id)init;
-(int)exec;
-(void)resetRedirect;
-(void)setCommand:(id)arg0 ;
-(void)setCommandWithArguments:(id)arg0 ;


@end


#endif