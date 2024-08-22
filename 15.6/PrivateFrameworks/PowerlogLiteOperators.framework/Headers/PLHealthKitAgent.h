// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLHEALTHKITAGENT_H
#define PLHEALTHKITAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition;



@interface PLHealthKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *cloudSyncHandler; // ivar: _cloudSyncHandler
@property (retain) PLXPCListenerOperatorComposition *queryHandler; // ivar: _queryHandler


+(id)entryEventPointDefinitions;
+(void)load;
-(void)initOperatorDependancies;


@end


#endif