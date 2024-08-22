// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCNOOPAPPACTIVITYMONITOR_H
#define FCNOOPAPPACTIVITYMONITOR_H

@class NSString;
@protocol FCAppActivityMonitor;

#import <Foundation/Foundation.h>


@interface FCNoOpAppActivityMonitor : NSObject <FCAppActivityMonitor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)addObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif