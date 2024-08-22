// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTUUIDQUERYOBSERVER_H
#define MTUUIDQUERYOBSERVER_H

@class NSArray, NSSet;


#import "MTBaseQueryObserver.h"

@interface MTUuidQueryObserver : MTBaseQueryObserver

@property (retain, nonatomic) NSArray *uuidOrder; // ivar: _uuidOrder
@property (retain, nonatomic) NSSet *uuidSet; // ivar: _uuidSet


-(id)addResultsChangedHandler:(id)arg0 ;
-(void)controllerDidChangeContent:(id)arg0 ;
-(void)notifyObservers;
-(void)startObserving;


@end


#endif