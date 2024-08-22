// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPTASK_H
#define FPTASK_H

@class NSArray, NSFileHandle;

#import <Foundation/Foundation.h>


@interface FPTask : NSObject

@property (retain, nonatomic) NSArray *argv; // ivar: _argv
@property (retain, nonatomic) NSFileHandle *standardError; // ivar: _standardError
@property (retain, nonatomic) NSFileHandle *standardOutput; // ivar: _standardOutput
@property (readonly, nonatomic) int waitStatus; // ivar: _waitStatus


+(id)sanitizeStringForFilename:(id)arg0 ;
+(id)taskWithArguments:(id)arg0 ;
+(id)taskWithCommand:(id)arg0 ;
+(id)taskWithCommandWithArguments:(id)arg0 ;
+(id)taskWithRedirectedOutputAndCommand:(id)arg0 ;
-(id)init;
-(int)_prepareRedirections:(**void)arg0 ;
-(int)exec;
-(int)execAsync;
-(void)resetRedirect;
-(void)setCommand:(id)arg0 ;
-(void)setCommandWithArguments:(id)arg0 ;


@end


#endif