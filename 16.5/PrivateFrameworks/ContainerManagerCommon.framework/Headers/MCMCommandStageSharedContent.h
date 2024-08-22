// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMCOMMANDSTAGESHAREDCONTENT_H
#define MCMCOMMANDSTAGESHAREDCONTENT_H

@class NSString;
@protocol MCMParametersStageSharedContent;


#import "MCMCommand.h"

@interface MCMCommandStageSharedContent : MCMCommand <MCMParametersStageSharedContent>



@property (readonly, nonatomic) NSString *destinationRelativePath; // ivar: _destinationRelativePath
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) NSString *sourceRelativePath; // ivar: _sourceRelativePath


+(Class)incomingMessageClass;
+(NSUInteger)command;
-(BOOL)preflightClientAllowed;
-(id)initWithMessage:(id)arg0 context:(id)arg1 reply:(id)arg2 ;
-(void)execute;


@end


#endif