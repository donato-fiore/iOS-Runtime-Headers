// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLWATCHKITAGENT_H
#define PLWATCHKITAGENT_H

@class PLAgent, PLXPCListenerOperatorComposition;



@interface PLWatchKitAgent : PLAgent

@property (retain) PLXPCListenerOperatorComposition *xpcHandler; // ivar: _xpcHandler


+(id)entryEventPointDefinitions;
+(void)load;
-(id)appNameForWatchAppExtension:(id)arg0 ;
-(void)initOperatorDependancies;


@end


#endif