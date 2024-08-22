// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPHISTORYCONTAINER_H
#define MSPHISTORYCONTAINER_H

@class NSMutableSet;


#import "MSPContainer.h"

@interface MSPHistoryContainer : MSPContainer {
    NSMutableSet *_dependents;
}




+(id)sharedLocalContainer;
+(id)sharedRemoteContainer;
-(id)queryWithDelegate:(id)arg0 ;
-(void)_commitEditWithFinalContents:(id)arg0 context:(id)arg1 completion:(id)arg2 ;
-(void)_processNewEditedContents:(id)arg0 ;
-(void)_processNewLoadedContents:(id)arg0 ;
-(void)addDependent:(id)arg0 ;
-(void)removeDependent:(id)arg0 ;


@end


#endif