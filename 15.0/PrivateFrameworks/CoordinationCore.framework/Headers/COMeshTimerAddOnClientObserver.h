// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef COMESHTIMERADDONCLIENTOBSERVER_H
#define COMESHTIMERADDONCLIENTOBSERVER_H

@class NSSet;


#import "COClientObserver.h"

@interface COMeshTimerAddOnClientObserver : COClientObserver

@property (readonly, copy, nonatomic) NSSet *constraints; // ivar: _constraints


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithConnection:(id)arg0 constraints:(id)arg1 ;


@end


#endif