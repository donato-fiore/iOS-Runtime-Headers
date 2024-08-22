// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIAVOIDANCECOORDINATOR_H
#define UIAVOIDANCECOORDINATOR_H

@class NSMutableDictionary, NSMutableSet;

#import <Foundation/Foundation.h>


@interface UIAvoidanceCoordinator : NSObject {
    NSMutableDictionary *_blockades;
    NSMutableSet *_clients;
    int _recurseCount;
}


@property (nonatomic) CGRect avoidanceFrame; // ivar: _avoidanceFrame


-(id)findBlockadesForName:(id)arg0 ;
-(id)findClientsForBlockade:(id)arg0 ;
-(id)findNamesForBlockade:(id)arg0 ;
-(id)init;
-(void)addAvoidanceObject:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)releaseAll:(id)arg0 withType:(NSUInteger)arg1 ;
-(void)removeAvoidanceObject:(id)arg0 ;
-(void)setGroupOfBlockades:(id)arg0 forBlockadeIdentifier:(id)arg1 ;
-(void)updateClients:(id)arg0 ;


@end


#endif