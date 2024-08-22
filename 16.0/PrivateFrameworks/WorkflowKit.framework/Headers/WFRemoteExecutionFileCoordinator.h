// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFREMOTEEXECUTIONFILECOORDINATOR_H
#define WFREMOTEEXECUTIONFILECOORDINATOR_H

@class NSHashTable, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface WFRemoteExecutionFileCoordinator : NSObject

@property (retain, nonatomic) NSHashTable *waitingArchivers; // ivar: _waitingArchivers
@property (retain, nonatomic) NSMutableDictionary *waitingFiles; // ivar: _waitingFiles


-(id)init;
-(void)handleFile:(id)arg0 withIdentifier:(id)arg1 ;
-(void)registerArchiver:(id)arg0 ;


@end


#endif