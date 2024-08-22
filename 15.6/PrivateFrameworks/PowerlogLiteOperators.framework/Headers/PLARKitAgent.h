// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLARKITAGENT_H
#define PLARKITAGENT_H

@class PLAgent;



@interface PLARKitAgent : PLAgent



+(id)entryEventBackwardDefinitions;
+(id)entryEventForwardDefinitionState;
+(id)entryEventForwardDefinitions;
+(id)entryEventNoneDefinitions;
+(id)entryEventPointDefinitions;
+(void)load;
-(void)initOperatorDependancies;
-(void)log;


@end


#endif