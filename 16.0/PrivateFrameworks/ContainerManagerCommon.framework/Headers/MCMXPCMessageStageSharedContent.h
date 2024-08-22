// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMXPCMESSAGESTAGESHAREDCONTENT_H
#define MCMXPCMESSAGESTAGESHAREDCONTENT_H

@class NSString;
@protocol MCMParametersStageSharedContent;


#import "MCMXPCMessageWithIdentifierBase.h"

@interface MCMXPCMessageStageSharedContent : MCMXPCMessageWithIdentifierBase <MCMParametersStageSharedContent>



@property (readonly, nonatomic) NSString *destinationRelativePath; // ivar: _destinationRelativePath
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sourceRelativePath; // ivar: _sourceRelativePath


-(id)initWithXPCObject:(id)arg0 context:(id)arg1 error:(*NSUInteger)arg2 ;
-(unsigned int)disposition;


@end


#endif