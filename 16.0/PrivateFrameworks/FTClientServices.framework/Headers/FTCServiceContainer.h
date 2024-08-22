// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTCSERVICECONTAINER_H
#define FTCSERVICECONTAINER_H

@class NSMutableSet;

#import <Foundation/Foundation.h>

#import "FTCServiceMonitor.h"

@interface FTCServiceContainer : NSObject

@property (readonly, retain, nonatomic) NSMutableSet *listeners; // ivar: _listeners
@property (retain, nonatomic) FTCServiceMonitor *monitor; // ivar: _monitor


-(BOOL)addListenerID:(id)arg0 ;
-(BOOL)hasListenerID:(id)arg0 ;
-(BOOL)removeListenerID:(id)arg0 ;
-(id)initWithServiceType:(NSInteger)arg0 ;
-(void)dealloc;


@end


#endif