// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSYSYNCSESSIONOBSERVEREXPORTEDOBJECT_H
#define PSYSYNCSESSIONOBSERVEREXPORTEDOBJECT_H

@class NSString;
@protocol PSYSyncSessionObserverInterface;

#import <Foundation/Foundation.h>


@interface PSYSyncSessionObserverExportedObject : NSObject <PSYSyncSessionObserverInterface>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PSYSyncSessionObserverInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)invalidateSyncSession:(id)arg0 ;
-(void)syncSessionWillStart:(id)arg0 ;
-(void)updateSyncSession:(id)arg0 ;


@end


#endif