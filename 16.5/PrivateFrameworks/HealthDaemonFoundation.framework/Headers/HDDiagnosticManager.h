// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDIAGNOSTICMANAGER_H
#define HDDIAGNOSTICMANAGER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface HDDiagnosticManager : NSObject {
    NSHashTable *_objects;
    os_unfair_lock_s _lock;
}




+(id)sharedDiagnosticManager;
-(id)_diagnosticsForKeys:(id)arg0 shouldLog:(BOOL)arg1 ;
-(id)_diagnosticsOverview;
-(id)diagnosticsForKeys:(id)arg0 ;
-(id)init;
-(void)addObject:(id)arg0 ;
-(void)logAllDiagnostics;
-(void)removeObject:(id)arg0 ;


@end


#endif