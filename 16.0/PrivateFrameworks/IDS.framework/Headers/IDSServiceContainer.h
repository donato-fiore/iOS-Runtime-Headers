// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSERVICECONTAINER_H
#define IDSSERVICECONTAINER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "IDSServiceMonitor.h"

@interface IDSServiceContainer : NSObject

@property (readonly, nonatomic) NSMutableSet *listeners; // ivar: _listeners
@property (retain, nonatomic) IDSServiceMonitor *monitor; // ivar: _monitor


-(BOOL)addListenerID:(id)arg0 ;
-(BOOL)hasListenerID:(id)arg0 ;
-(BOOL)removeListenerID:(id)arg0 ;
-(id)initWithService:(id)arg0 ;


@end


#endif