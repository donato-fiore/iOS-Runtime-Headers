// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTCONTEXTINFO_H
#define SIGNPOSTCONTEXTINFO_H

@class NSString;
@protocol SignpostCARenderServerFrameMetadata;

#import <Foundation/Foundation.h>


@interface SignpostContextInfo : NSObject <SignpostCARenderServerFrameMetadata>



@property (readonly, nonatomic) unsigned int contextId; // ivar: _contextId
@property (readonly, nonatomic) NSUInteger earliestMCT; // ivar: _earliestMCT
@property (readonly, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, nonatomic) unsigned int frameSeed; // ivar: _frameSeed
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSString *processName;
@property (readonly, nonatomic) unsigned int transactionSeed; // ivar: _transactionSeed


-(id)initWithContextInfoEvent:(id)arg0 ;


@end


#endif